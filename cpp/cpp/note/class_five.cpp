// #include <iostream>
// class Foo
// {
// public:
//     Foo() { std::cout << "默认构造\n"; }
//     Foo(const Foo &) { std::cout << "拷贝构造\n"; }
//     Foo &operator=(const Foo &)
//     {
//         std::cout << "拷贝赋值\n";
//         return *this;
//     }
// };

// int main()
// {
//     Foo a;     // 默认构造
//     Foo b = a; // 拷贝构造（不是赋值！）
//     Foo c(b);  // 拷贝构造（与上一行本质相同）
//     b = a;     // 拷贝赋值
//     return 0;
// }

// // 类型别名
// using LL = long long;

#include <iostream>
#include <string>

class Student
{
public:
    // 静态成员声明：用于统计总共创建了多少个学生
    static int s_student_count;

    Student(std::string name) : m_name(name)
    {
        s_student_count++; // 每次创建一个对象，总数加1
    }

private:
    std::string m_name;
};

// 静态数据成员必须在类外部进行定义和初始化！
int Student::s_student_count = 0;

int main()
{
    std::cout << "Initial count: " << Student::s_student_count << "\n";

    Student s1("Alice");
    Student s2("Bob");
    Student s3("Charlie");

    // 所有的 Student 对象共享同一个 s_student_count
    std::cout << "Current count: " << Student::s_student_count << "\n";

    return 0;
}