#include <iostream>


int main()
{
    int n;

    n = 0;

    std::cout << "max number of ints: " <<INT_MAX<< std::endl;
    std::cout << "min number of ints: " <<INT_MIN<< std::endl;

    std::cout << "size of n is: " <<sizeof(n)<< std::endl;
    std::cout << "size of unsigned int is: " <<sizeof(unsigned int)<< std::endl;

    std::cout << "size of int is: " <<sizeof(int)<< std::endl;
    std::cout << "size of bool is: " <<sizeof(bool)<< std::endl;
    std::cout << "size of float is: " <<sizeof(float)<< std::endl;
    std::cout << "size of double is: " <<sizeof(double)<< std::endl;
    std::cout << "size of char is: " <<sizeof(char)<< std::endl;

    return 0;
}