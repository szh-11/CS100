#include "dynarray.hpp"
#include <algorithm>
#include <iostream>

void reverse(Dynarray &a)
{
  for (int i = 0, j = a.size() - 1; i < j; ++i, --j)
    std::swap(a.at(i), a.at(j));
}

void print(const Dynarray &a)
{
  std::cout << '[';
  if (!a.empty())
  {
    for (std::size_t i = 0; i + 1 < a.size(); ++i)
      std::cout << a.at(i) << ", ";
    std::cout << a.at(a.size() - 1);
  }
  std::cout << ']' << std::endl;
}

int main()
{
  int n;
  std::cin >> n;
  Dynarray arr(n);
  for (int i = 0; i != n; ++i)
    std::cin >> arr.at(i);
  reverse(arr);
  print(arr);
  int brr[] = {1, 2, 3, 5};
  Dynarray a(brr, brr + 4);
  Dynarray b;
  std::cout << a << '\n'
            << b << std::endl;
  Dynarray copy = arr; // 拷贝初始化
  copy.at(0) = 42;
  std::cout << arr.at(0) << '\n'
            << copy.at(0) << std::endl;

  // Dynarray a(3);
  // a.at(0) = 10;
  // Dynarray b = a;
  // a.at(0) = 1;
  // std::cout << b.at(0);

  return 0;
}
