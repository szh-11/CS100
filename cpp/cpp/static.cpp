
#include <iostream>

void functionA()
{
    // 寿命：贯穿整个程序。
    // 作用域：只在 functionA 的这两个大括号 { } 内部有效。
    static int my_secret = 100;

    my_secret++;
    std::cout << "A看到了: " << my_secret << "\n";
}

void functionB()
{
    // ❌ 下面这行代码会导致编译错误！
    // 编译器会抱怨："my_secret" 是未声明的标识符。
    // 因为 functionB 根本不知道 my_secret 是什么，它的名字被封印在了 functionA 里。
    // my_secret = 200;
}

int main()
{
    functionA(); // 输出 101
    functionA(); // 输出 102
    functionB();
    return 0;
}

// 在哪里定义在哪里用
//
//
//
//
//
//
//
//

class Student
{
public:
    // C++17 推荐写法：直接加上 inline 可以在类内初始化
    inline static int total_students = 0;

    Student()
    {
        total_students++; // 每招收一个学生，总数加1
    }
};

int main()
{
    Student s1;
    Student s2;
    // 访问静态变量不需要具体的对象，直接用 类名::变量名
    std::cout << "总人数: " << Student::total_students << "\n"; // 输出 2
}

// 静态函数手里是没有this指针的
// 普通成员函数是有this指针的

// static外部初始化
class Counter
{
    // 👇 虽然你没写，但 C++ 默认这里是 private:
private:
    static int count; // 它是私有的，外部绝不能直接写 Counter::count = 10;

public:
    // 从这里开始，下面的东西变成了公开的
    static void increment() { ++count; }
    static int get() { return count; }
};

// 这行是给静态变量分配内存并初始化，它是合法的，不受 private 限制
int Counter::count = 0;

class Player
{
public:
    int hp = 100;
    int attack = 10;

    // 返回类型是 Player& (玩家对象本身的引用)
    Player &heal()
    {
        hp += 20;
        return *this; // 回血后，把玩家自己扔回去
    }

    Player &powerUp()
    {
        attack += 5;
        return *this; // 加攻击后，把玩家自己扔回去
    }
};

int main()
{
    Player p1;
    // 魔法来了！因为每次调用完都返回了 p1 自己，所以可以一直点下去（链式调用）
    p1.heal().powerUp().heal();
}

// 设成Player&。然后return *this是为了链式调用

// 一个被 moved-from 的对象处于 "Valid but unspecified state"（有效但未知的状态）。