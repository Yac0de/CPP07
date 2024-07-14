#include "iter.hpp"

template <typename T>
void print(T& x){ std::cout << x << std::endl; }

int main()
{
    int intArr[] = {1, 2, 3, 4, 5};
    size_t intLen = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << "Array of integers:" << std::endl;
    iter(intArr, intLen, print);

    std::string strArr[] = {"Hello", "World", "42", "School"};
    size_t strLen = sizeof(strArr) / sizeof(strArr[0]);

    std::cout << "\nArray of strings:" << std::endl;
    iter(strArr, strLen, print);

    double dblArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t dblLen = sizeof(dblArr) / sizeof(dblArr[0]);

    std::cout << "\nArray of doubles:" << std::endl;
    iter(dblArr, dblLen, print);

    return 0;
}
