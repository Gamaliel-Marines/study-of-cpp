#include <iostream>

void getMinAndMax(int numbers[], int size, int* min, int* max) {
for (int i = 1; i < size; i++) {
if (numbers[i] > *max)
*max = numbers[i];
if (numbers[i] < *min)
*min = numbers[i];
}
}


int main()
{
    int numbers [5] = { 5,4, -2,29,6 };
    int min = numbers [0];
    int max = numbers [0];
    getMinAndMax(numbers, 5, &min, &max);
    std::cout << "min is " << min << std::endl; 
    std::cout << "max is " << max << std::endl;

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