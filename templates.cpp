#include <iostream>

template <typename T>
//or "template <class T>"
int swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
    return 0;
}

// char swap(char& a, char& b)
// {
//     char temp = a;
//     a = b;
//     b = temp;
//     return 0;
// }


int main()
{

    int a = 5, b = 10;
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"b: "<<b<<std::endl;
    swap(a, b);
    //swap<int>(a, b);
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"b: "<<b<<std::endl;

    char c = 'a', d = 'b';
    std::cout<<"c: "<<c<<std::endl;
    std::cout<<"d: "<<d<<std::endl;
    swap(c, d);
    //swap<char>(c, d);
    std::cout<<"c: "<<c<<std::endl;
    std::cout<<"d: "<<d<<std::endl;




    return 0;
}