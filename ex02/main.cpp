#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

int main()
{
    Array<int> a;
    std::cout << "Size of a: " << a.size() << std::endl;

    Array<int> b(5);
    std::cout << "Size of b: " << b.size() << std::endl;

    for (size_t i = 0; i < b.size(); ++i)
    {
        b[i] = i * 2;
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
    }

    Array<int> c(b);
    std::cout << "Size of c: " << c.size() << std::endl;

    Array<int> d;
    d = b;
    std::cout << "Size of d: " << d.size() << std::endl;

    try
    {
        std::cout << d[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    Array<double> e(3);
    e[0] = 1.1;
    e[1] = 2.2;
    e[2] = 3.3;
    std::cout << std::endl << "Size of e: " << e.size() << std::endl;
    for (size_t i = 0; i < e.size(); i++)
        std::cout << "e[" << i << "] = " << e[i] << std::endl;

    Array<std::string> f(2);
    f[0] = "Hello";
    f[1] = "World";
    std::cout << std::endl << "Size of f: " << f.size() << std::endl;
    for (size_t i = 0; i < f.size(); i++)
        std::cout << "f[" << i << "] = " << f[i] << std::endl;

    return 0;
}
