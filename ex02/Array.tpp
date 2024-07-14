#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(new T[0]), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _len(n) {}

template <typename T>
Array<T>::Array(const Array& src) : _arr(new T[src.size()]), _len(src.size())
{
    for (size_t i = 0; i < _len; ++i)
        _arr[i] = src._arr[i];
}

template <typename T>
Array<T>::~Array() { delete[] _arr; }

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
    if (this != &rhs)
    {
        delete[] _arr;
        _arr = new T[rhs.size()]();
        _len = rhs._len;
        for (size_t i = 0; i < _len; i++)
            _arr[i] = rhs._arr[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](size_t i)
{
    if (i >= _len)
        throw std::out_of_range("Index out of bounds");
    return _arr[i];
}

template <typename T>
const T& Array<T>::operator[](size_t i) const
{
    if (i >= _len)
        throw std::out_of_range("Index out of bounds");
    return _arr[i];
}

template <typename T>
size_t Array<T>::size() const {return _len;}

#endif
