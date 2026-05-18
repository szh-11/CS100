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

    bool operator<(const Dynarray &a, const Dynarray &b)
    {
        return std::lexicographical_compare(a.m_storage, a.m_storage + a.mlength, b.m_storage, b.m_storage + b.mlength);
    }

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
