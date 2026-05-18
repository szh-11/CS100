
#include <iostream>
#include <string>

int main()
{
    std::string text = "CS";
    std::string num = "100";

    std::string result1 = text + num + "!";
    std::cout << result1 << std::endl;
    std::string result2 = text;
    result2 += num;
    result2 += "!";
    std::cout << (result1 == result2) << std::endl;
    std::cout << (result1 == result2) << " " << result1.size() << std::endl;

    int ival = 42;
    int &ri = ival;

    std::cout << ri;
    ++ri;
    std::cout << ival;

    std::string str = "hello";
    for (char c : str)
    {
        c = std::toupper(c);
    }
    std::cout << str;
    return 0;
}

// 对于函数参数来说，int count_lowercase(std::string str)会需要重新复制字符串，带来额外的开销
// int count_lowercase(std::string &str)可以直接把东西拿给人家，但为了防止胡乱修改你的东西
// int count_lowercase(const std::string &str)这个时候别人只能看你的数据了，所以一些临时量也都可以存进去
// 注意const只读，不能做任何修改，否则会报错
// 引用不能绑定临时值
// int *ptr 买本子，状态：本子造好了，但上面还没写编号。
// ptr=&a 抄地址
//*ptr=20 去地址的地方改东西
//  int a[5] = {1, 2, 3, 4, 5};
//  printf("%d", a[100]); // ❌ UB！

// int x; // 里面装的是上一个房客留下的“垃圾”
// int y = x + 5; // ❌ UB！x 的值是随机的。

// int *p;
// {
//     int temp = 10;
//     p = &temp;
// }
// // temp 已经死了，它的房间被回收了
// *p = 20; // ❌ UB！你正在修改一块不再属于你的内存。

// int x = 10 / 0; // ❌ UB！

// int&意思是别名的意思，int*才是取地址
// int &r1,r2,r3,r4只有第一个r1是int&类型
// int &ar[N]是不存在的
// int array[10]是可以传 array [20]的,只是一个指针
// int

// 对于非对象的东西是不能引用的

// for(char &c:v){
//     c=
// }

//++i，--i都是左值，++i=42是合法的

// int &iref4=fun();error fun()产生的是右值

// int *pi5=new int{42}

// int *ptr = new int(10);
// 配备delete ptr
// new int[10]则需要delete[]

// class Accumulator {
//     int sum = 0;
// public:
//     Accumulator& addOne() {
//         sum++;
//         return *this;
//     }
//     Accumulator copyAddOne() {
//         sum++;
//         return *this;
//     }
//     int getSum() const {
//         return sum;
//     }
// };

// int main() {
//     Accumulator acc;
//     acc.addOne().addOne();              // Step 1
//     acc.copyAddOne().addOne();          // Step 2他会加1，加完1之后由于是accmulator而不是accmulator&，所以拿出来的会是一个复印件

//     const Accumulator& r = acc;
//     int s = r.getSum();                 // Step 3
//     return 0;
// }

// //关于reference
// int& badFunc(){
//     int local = 10;
//     return local;
// }
// //局部变量出函数就销毁了，引用变成野引用

// //mutable
// class Example {
//     int value;
//     mutable int accessCount = 0;  // 声明为 mutable
// public:
//     int getValue() const {
//         accessCount++;  // ✅ 现在可以修改，因为它是 mutable
//         return value;
//     }

//     int getAccessCount() const {
//         return accessCount;
//     }
// };