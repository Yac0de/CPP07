#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T*      _arr;
    size_t  _len;

public:
    Array();
    Array(unsigned int n);
    Array(const Array& src);
    ~Array();

    Array& operator=(const Array& rhs);

    T& operator[](size_t i);
    const T& operator[](size_t i) const;
    size_t size() const;
};

#endif
