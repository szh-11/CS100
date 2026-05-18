

// reference to const可以绑右值、
// std::move(x) 仅仅是执行了一个从左值（lvalue）到右值（rvalue）的强制类型转换（cast）
// 如果你没有提供接收右值引用的版本（即没有写 && 重载），那么传入右值时并不会报错。此时，右值会退化匹配到常左值引用 const std::string &，从而执行拷贝操作 。
#include <iostream>
#include <memory>
#include <string>

class Student
{
public:
    std::string name;
    Student(std::string n) : name(n) { std::cout << name << " 被创建了！\n"; }
    ~Student() { std::cout << name << " 被销毁了自动清理内存！\n"; }
};

void uniquePtrDemo()
{
    std::cout << "--- unique_ptr 演示 ---\n";

    // 创建一个 unique_ptr，讲义强烈建议使用 std::make_unique [cite: 167]
    auto p1 = std::make_unique<Student>("Alice");

    // auto p2 = p1; // ❌ 编译报错！unique_ptr 不能被复制！[cite: 198]

    // 但是可以“转移”所有权 (Move) [cite: 204]
    auto p2 = std::move(p1);

    if (!p1)
    { // 转移后，p1 变成了空指针 [cite: 217]
        std::cout << "p1 现在是空指针了。\n";
    }

    std::cout << "函数准备结束...\n";
} // 函数结束，p2 离开作用域，自动调用 Student 的析构函数，完全不需要手动 delete！[cite: 189]