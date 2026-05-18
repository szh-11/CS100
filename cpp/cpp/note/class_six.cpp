// --- Shape.h ---
class Shape
{
public:
    // 1. 声明且定义（隐式 inline）
    double getArea() const { return m_area; }

    // 2. 仅声明 (Declaration)
    void setRadius(double r);

private:
    double m_area;
};

// --- Shape.cpp ---
// 3. 在类外定义 (Definition)
// 必须加上 Shape:: 告诉编译器这个函数属于哪个类
void Shape::setRadius(double r)
{
    m_area = 3.14 * r * r;
}

class Database
{
public:
    // 仅仅是声明：告诉编译器有这么个全局共享变量，但还没给它分配地方住
    static int connectionCount;

    static void increment() { connectionCount++; } // 静态函数可以在类内定义
};

// 必须在类外定义！！（通常在 .cpp 文件中）
// 此时才真正分配了 4 字节的内存空间
int Database::connectionCount = 0;

int main()
{
    Database::connectionCount = 5; // 正确
}

// 1. 在此处应该如何声明 Employee 类？
_________class Employee_________________;

class Manager
{
public:
    void setSalary(Employee &e, double s);
};

class Employee
{
    double m_salary;
    // 2. 在此处添加一行，使 Manager 类成为友元
    ___________friend class Employee_______________;
};

// 3. 在类外实现 setSalary，注意作用域
void _________Manager::setSalary(Employee &e, double s) _________________
{
    e.m_salary = s;
}