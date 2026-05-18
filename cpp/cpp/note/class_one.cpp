

#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "a+b=" << a + b
              << '\n';

    std::string str = "Hello world";
    std::cout << str << std::endl;
    std::string s1(7, 'a');
    std::cout << s1 << std::endl;
    std::string s2 = s1;
    std::cout << s2 << std::endl;

    // std::string s;

    // std::string str{"Hello World"};
    // std::cout << str.size() << std::endl;

    // std::string s1 = "Hello";
    // std::string s2 = "";

    // s1 = s1 + s2;//very slow,need to copy s1 everytime
    // s1 += s2;//Fast

    // std::string s1{"Hello"};
    // std::string s2{"world"};
    // s2 = s1;
    // s1 += 'a';

    // using namespace std;
    // cout << "Hello world"
    //      << '\n';
    // return 0;
}
