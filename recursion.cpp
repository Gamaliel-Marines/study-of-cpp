#include <iostream>

template <typename T>

T factorial(T n)
{
    if(n == 1)
        //base case
        return 1;
    else
        return n * factorial(n - 1);
}

template <typename T>
T sum(T m, T n)
{
    if(m==n)
        //base case
        return m;
    else
        return m + sum(m + 1, n);
}

int main()
{
    int n = 5;
    int m = 1;

    std::cout<<"factorial("<<n<<"): "<<factorial(n)<<std::endl;
    std::cout<<"sum("<<m<<", "<<n<<"): "<<sum(m, n)<<std::endl;




    return 0;
}