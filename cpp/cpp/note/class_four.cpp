#include <iostream>

int main()
{

    struct A
    {
        A() { std::cout << 'c'; }  // 构造函数
        ~A() { std::cout << 'd'; } // 析构函数：对象“销毁时”自动执行的函数，用来做清理工作
    };

    for (int i = 0; i < 3; ++i)
    {
        A a;
    }

    //     Student s;
    // Student* p = &s;

    // p->age = 18;   // 用 ->

    // p是指针就用->，p->age=(*p).age
}

// student() = default;
// ~student(){delete course :std::cout<<"destroy student"<<name}//可以在析构函数里释放内存

// Dynarray(std::size_t n)
//     : m_storage(new int[n]{}), m_length(n) {}

// 和int* p = new int[n]{}; 的效果是一模一样的

class Dynarray
{
    int *m_storage;
    std::size_t m_length;

public:
    Dynarray(std::size_t n)
        : m_storage(new int[n]{}), m_length(n) {}

    ~Dynarray()
    {
        delete[] m_storage; // 释放内存，注意 delete[]
    }

    std::size_t size() const { return m_length; }
    bool empty() const { return m_length == 0; }

    int &at(std::size_t i) { return m_storage[i]; }
    const int &at(std::size_t i) const { return m_storage[i]; }
};

// Dynarray arr(10)

// //浅拷贝Dynarray a(10);
// Dynarray b = a;  // 默认拷贝（浅拷贝）
// //b和a指向同一个内存，当你b delete掉那部分内存的时候，a就变成空指针了
// 所以用别名就不需要担心应为变了

// 析构函数在“对象离开作用域时”执行

// class的一些细节

// 定义：现在菜单上有两个坑位了
Scale(int w, int a) : width(w), area(a) {}

// 使用
Scale s(10, 500); // 必须填两个数，width拿10，area拿500

// 定义
Scale(int w) : width(w), area(w * w) {}

// 使用
Scale s(10); // 括号里只能填一个整数

// 分配 5 个空间，前两个是 1 和 2，后面自动补 0
m_storage = new int[5]{1, 2};

// 只有 new int[n]，没有 {}。
// 数组里的值是内存里残留的“垃圾值”，速度最快但有安全隐患。
m_storage = new int[n];

// const Accumulator& r = acc;
// r.getSum()：能跑通，因为 getSum 声明了 const，保证不改数据。

// 如果写 r.addOne()：会报错！因为 r 是常量引用，而 addOne 没承诺不改数据。