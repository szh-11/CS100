
// #include <algorithm>
// #include <iostream>

// class Dynarray
// {
//   int *m_storage;
//   std::size_t m_length;

// public:
//   explicit Dynarray(std::size_t n) : m_storage(new int[n]{}), m_length(n) {}//默认初始化，需要explicit
//   //explicit的作用是强制显式调用
//   //void processArray(Dynarray arr) { /* ... */ }
//   //processArray(Dynarray(5));单参数的时候，int会被读成class

//   std::size_t size() const
//   {
//     return m_length;
//   }

//   bool empty() const
//   {
//     return m_length == 0;
//   }

//   int &at(std::size_t i)
//   {
//     if (i >= m_length)
//     {
//       throw std::out_of_range{"Dynarray index out of range!"};
//     }
//     else
//       return m_storage[i];
//   }
//   const int &at(std::size_t i) const//为只读的Dynarray提供的at
//   {
//     if (i >= m_length)
//     {
//       throw std::out_of_range{"Dynarray index out of range!"};
//     }
//     else
//       return m_storage[i];
//   }

//   Dynarray(std::size_t n, int x)//Dynarray(3,2)[2,2,2]
//       : m_storage(new int[n]{}), m_length(n) {
//     for (std::size_t i = 0;i<n; i++)
//       m_storage[i] = x;
//       }

//   Dynarray(const int *begin, const int *end)
//       : m_storage(new int[end - begin]{}), m_length(end - begin)
//   {
//     for (std::size_t i = 0; i < m_length; i++)
//     {
//       m_storage[i] = begin[i];//从begin位置往后数 begin[i]=*(begin+i)
//     }
//   }
//   // const int arr[10]={1,2,3,4,5,6,7,8,9,10}
//   // Dynarray a(arr+3,arr+7);传进去的就是一个数组，可以指针直接调的不用担心

//   Dynarray &operator=(const Dynarray &other) //深拷贝     如果没有&本身就在调用这个函数，陷入循环
//   //前一个&是为了节省内存，不要再深拷贝了

//   {
//     int *new_data = new int[other.size()];
//     for (std::size_t i = 0; i != other.size(); ++i)
//       new_data[i] = other.at(i);
//     delete[] m_storage;//本来有内存，现在要新的，旧的肯定得释放掉
//     m_storage = new_data;
//     m_length = other.size();
//     return *this;
//   }

//   ~Dynarray()
//   {
//     delete[] m_storage;
//   }
//   // move
//   Dynarray(Dynarray &&other) noexcept // std::move会将左值变为右值，移动构造函数，一开始不存在
//       : m_storage(other.m_storage), m_length(other.m_length)
//   {
//     other.m_length = 0;
//     other.m_storage = nullptr;
//   }
//   //arr2 = std::move(arr1);
// Dynarray &operator=(Dynarray &&other) noexcept {//拷贝赋值函数，当自己本身已经存在，noexcept是用于发誓内存等等环节不会出错
//     if (this != &other) {//字符值，会在把释放自己内存的同时，把other的内存也释放
//         delete[] m_storage;
//         m_storage = other.m_storage;
//         m_length = other.m_length;
//         other.m_storage = nullptr;
//         other.m_length = 0;
//     }
//     return *this;
// }

//   Dynarray(const Dynarray &other)//拷贝构造函数
//       : m_storage(new int[other.size()]{}), m_length(other.size())
//   {
//     for (std::size_t i = 0; i != other.size(); ++i)
//       m_storage[i] = other.at(i);
//   }//系统默认的拷贝构造函数会带来双重释放的问题

//   // std::size_t size() const
//   // {
//   //   return m_length;
//   // }

//   // bool empty() const
//   // {
//   //   return m_length == 0;
//   // }

//   // int &at(std::size_t i)
//   // {
//   //   if (i >= m_length)
//   //   {
//   //     throw std::out_of_range{"Dynarray index out of range!"};
//   //   }
//   //   else
//   //     return m_storage[i];
//   // }
//   // const int &at(std::size_t i) const//为只读的Dynarray提供的at
//   // {
//   //   if (i >= m_length)
//   //   {
//   //     throw std::out_of_range{"Dynarray index out of range!"};
//   //   }
//   //   else
//   //     return m_storage[i];
//   // }

//     // Dynarray(const Dynarray &) = default;
//   // }
//   Dynarray() : m_storage(nullptr), m_length(0) {}//空指针初始化
// };

// // void reverse(Dynarray &a)
// // {
// //   for (int i = 0, j = a.size() - 1; i < j; ++i, --j)
// //     std::swap(a.at(i), a.at(j));
// // }

// // void print(const Dynarray &a)
// // {
// //   std::cout << '[';
// //   if (!a.empty())
// //   {
// //     for (std::size_t i = 0; i + 1 < a.size(); ++i)
// //       std::cout << a.at(i) << ", ";
// //     std::cout << a.at(a.size() - 1);
// //   }
// //   std::cout << ']' << std::endl;
// // }

// // int main()
// // {
// //   int n;
// //   std::cin >> n;
// //   Dynarray arr(n);
// //   for (int i = 0; i != n; ++i)
// //     std::cin >> arr.at(i);
// //   reverse(arr);
// //   print(arr);
// //   Dynarray copy = arr;
// //   copy.at(0) = 42;
// //   std::cout << arr.at(0) << '\n'
// //             << copy.at(0) << std::endl;

// //   auto p = new int[0]{};
// //   delete[] p;

// //   return 0;
// // }

// //初始化用拷贝构造
// //Dynarray arr1(5); // arr1 诞生了，里面有 5 个元素

// // 场景 1：用括号初始化（非常明确是构造）
// // Dynarray arr2(arr1);

// // 场景 2：用等号初始化（⚠️ 新手最容易认错！）
// // Dynarray arr3 = arr1;
#include <algorithm>
#include <iostream>

class Dynarray
{
public:
  using size_type = std::size_t;
  using value_type = int;
  using pointer = int *;
  using reference = int &;
  using const_pointer = const int *;
  using const_reference = const int &;

private:
  pointer m_storage;
  size_type m_length;

public:
  explicit Dynarray(size_type n) : m_storage(new value_type[n]{}), m_length(n) {}

  int &operator[](std::size_t n)
  {
    return m_storage[n];
  }

  const int &operator[](std::size_t n) const
  {
    return m_storage[n];
  }

  friend bool operator<(const Dynarray &a, const Dynarray &b)
  {
    return std::lexicographical_compare(a.m_storage, a.m_storage + a.m_length, b.m_storage, b.m_storage + b.m_length);
  }
  friend bool operator==(const Dynarray &a, const Dynarray &b)
  {
    return std::equal(a.m_storage, a.m_storage + a.m_length, b.m_storage, b.m_storage + b.m_length);
  }

  friend std::ostream &operator<<(std::ostream &, const Dynarray &);

  size_type size() const
  {
    return m_length;
  }

  bool empty() const
  {
    return m_length == 0;
  }

  reference at(std::size_t i)
  {
    if (i >= m_length)
    {
      throw std::out_of_range{"Dynarray index out of range!"};
    }
    else
      return m_storage[i];
  }
  const_reference at(std::size_t i) const
  {
    if (i >= m_length)
    {
      throw std::out_of_range{"Dynarray index out of range!"};
    }
    else
      return m_storage[i];
  }

  Dynarray(size_type n, value_type x)
      : m_storage(new value_type[n]{}), m_length(n)
  {
    for (size_type i = 0; i < n; i++)
      m_storage[i] = x;
  }

  Dynarray(const_pointer begin, const_pointer end)
      : m_storage(new value_type[end - begin]{}), m_length(end - begin)
  {
    for (size_type i = 0; i < m_length; i++)
    {
      m_storage[i] = begin[i];
    }
  }

  Dynarray &operator=(const Dynarray &other)

  {
    pointer new_data = new value_type[other.size()];
    for (size_type i = 0; i != other.size(); ++i)
      new_data[i] = other.at(i);
    delete[] m_storage;
    m_storage = new_data;
    m_length = other.size();
    return *this;
  }

  ~Dynarray()
  {
    delete[] m_storage;
  }
  // move
  Dynarray(Dynarray &&other) noexcept
      : m_storage(other.m_storage), m_length(other.m_length)
  {
    other.m_length = 0;
    other.m_storage = nullptr;
  }
  // arr2 = std::move(arr1);
  Dynarray &operator=(Dynarray &&other) noexcept
  {
    if (this != &other)
    {
      delete[] m_storage;
      m_storage = other.m_storage;
      m_length = other.m_length;
      other.m_storage = nullptr;
      other.m_length = 0;
    }
    return *this;
  }

  Dynarray(const Dynarray &other)
      : m_storage(new value_type[other.size()]{}), m_length(other.size())
  {
    for (size_type i = 0; i != other.size(); ++i)
      m_storage[i] = other.at(i);
  }

  Dynarray() : m_storage(nullptr), m_length(0) {}
};

bool operator>(const Dynarray &lhs, const Dynarray &rhs)
{
  return rhs < lhs;
}
bool operator<=(const Dynarray &lhs, const Dynarray &rhs)
{
  return !(lhs > rhs);
}
bool operator>=(const Dynarray &lhs, const Dynarray &rhs)
{
  return !(lhs < rhs);
}
bool operator!=(const Dynarray &lhs, const Dynarray &rhs)
{
  return !(lhs == rhs);
}

std::ostream &operator<<(std::ostream &os, const Dynarray &r)
{
  os << '[';
  if (r.m_length > 0)
  {
    for (Dynarray::size_type i = 0; i < r.m_length - 1; i++)
      os << r.m_storage[i] << ',';

    os << r.m_storage[r.m_length - 1];
  };
  os << ']';
  return os;
}