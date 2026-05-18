

#include <iostream>
#include <string>
int main()
{

    std::string s1 = "Hello World";
    std::string s2("Hello World");
    std::string s3{"Hello World"};
    std::cout << s1 << "";
    // #include <iostream>
    // #include <string>

    // std::string s1 = "Hello world";
    // std::string s2("Hello world");
    // std::string s3{"Hello world"};
    std::string s4(7, 'a'); // "aaaaaaa"
    std::string s5;         // 空字符串

    std::cout << s1 << '\n'
              << s4 << "\nempty? " << std::boolalpha << s5.empty() << '\n';

    std::string str = "CS100";
    std::cout << "size: " << str.size() << std::endl;
    if (!str.empty())
        std::cout << "String is not empty.\n";

    std::string a = "apple";
    std::string b = "banana";
    if (a < b)
        std::cout << a << " < " << b << '\n';
    if (a == "apple")
        std::cout << "Equal works.\n";

    std::string word, line;
    std::cout << "Enter a word: ";
    std::cin >> word;
    std::cin.ignore(); // 清除残留换行（重要！）
    std::cout << "Enter a line: ";
    std::getline(std::cin, line);
    std::cout << "word = \"" << word << "\"\nline = \"" << line << "\"\n";

    // std::string s = "Hello";

    // for (char c : s)
    // {
    //     // 对 s 中的每个字符，都会执行一次循环体
    //     // 当前字符会被拷贝到变量 c 中
    //     std::cout << c << std::endl;
    // }
    std::string s = "Hello";
    for (char c : s)
    {
        std::cout << c << std::endl;
    }

    // class Student
    // {
    //     std::string name;
    //     std::string id;
    //     int entranceYear;

    // public: // 构造器决定了对象如何被初始化
    //     Student(const std::string &name_, const std::string &id_, int ey)
    //         : name(name_), id(id_), entranceYear(ey) {}
    //     Student(const std::string &name_, const std::string &id_)
    //         : name(name_), id(id_), entranceYear(std::stoi(id_.substr(0, 4))) {}//substr截取了前4个数字的年份。然后stoi转换成int
    // };
    // Student a("Alice", "2020123123", 2020);
    // Student b("Bob", "2020123124"); // entranceYear = 2020
    // Student c;                      // Error: No default constructor. (to be discussed later)
    // bool flag = true;
    // int result = (5 > 3);
    // std::cout << "bool size:" << sizeof(bool) << "byte(s)\n";
    // std::cout << "result =" << result << "(should be 1)\n";
    // std::cout << "type of (5>3) is " << typeid(5 > 3).name() << "\n";

    // const int len = 5;
    // int arr[len] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < len; ++i)
    // {
    //     std::cout << arr[i] << " ";
    // }

    // int x, y, z;
    // std::cout << "Enter three numbers: ";
    // std::cin >> x >> y >> z;
    // std::cout << "sum = " << x + y + z << std::endl; // std::endl 换行并刷新

    // 空参数列表表示无参数

    // class Student
    // {
    // private: // 如果有public可以不写
    //     std::string name;
    //     std::string id;
    //     int entranceYear;

    // public:
    //     void setName(const std::string &newName)
    //     {
    //         name = newName;
    //     }
    //     void printInfo() const
    //     {
    //         std::cout << "I am " << name << ", id " << id
    //                   << ", entrance year: " << entranceYear << std::endl;
    //     }
    //     bool graduated(int year) const
    //     {
    //         return year - entranceYear >= 4;
    //     }
    // };
    // Student s;
    // s.setName("Alice");
    // s.printInfo();

    // class Student
    // {
    //     std::string name;

    // public:
    //     void printThis() const
    //     {
    //         std::cout << "this = " << this << std::endl;
    //     }
    // };
    // int main()
    // {
    //     Student a, b;
    //     a.printThis();
    //     b.printThis();
    //     return 0;
    // }
    //=default 可以直接默认初始化
    // 冒号后面、花括号前面的部分就是初始化列表。它的执行顺序和成员的声明顺序一
    return 0;
}