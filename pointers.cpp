#include <iostream>

int main()
{
    int a;
    a = 10;
    int *p = &a;
    std::cout << "a = " << a << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "&a = " << &a << std::endl;
    std::cout << "*p = " << *p << std::endl;
    
    *p = 15;
    std::cout << "a = " << a << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "&a = " << &a << std::endl;
    std::cout << "*p = " << *p << std::endl;

    return 0;
}