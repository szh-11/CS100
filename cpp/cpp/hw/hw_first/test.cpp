// #include <iostream>
// #include <cstdlib>

// int main()
// {
//     std::cout << std::getenv("PATH") << std::endl;
// }
#include <iostream>
class Base
{
public:
    virtual void func() = 0;
    virtual void foo(int x) { std::cout << "Base::foo\n"; }
};

class Derived : public Base
{
public:
    // 使用 override 明确表示重写基类的虚函数
    // void func() override { std::cout << "Derived\n"; }
    // void foo(int x) override { std::cout << "Derived::foo\n"; }
};
int main()
{
    Derived a;
    a.func();
    return 0;
}