#include <iostream>

int main()
{
    std::cout<<"ascii value for a is: "<<(int)'a'<<std::endl;
    std::cout<<"ascii value for b is: "<<(int)'b'<<std::endl;
    std::cout<<"ascii value for c is: "<<(int)'c'<<std::endl;
    std::cout<<"ascii value for d is: "<<(int)'d'<<std::endl;

    std::cout<<"\n"<<std::endl;
    
    std::cout<<"ascii value for A is: "<<(int)'A'<<std::endl;
    std::cout<<"ascii value for B is: "<<(int)'B'<<std::endl;
    std::cout<<"ascii value for C is: "<<(int)'C'<<std::endl;
    std::cout<<"ascii value for D is: "<<(int)'D'<<std::endl;

    std::cout<<"\n"<<std::endl;

    std::cout<<"ascii value for 65 is: "<<(char)65<<std::endl;
    std::cout<<"ascii value for 66 is: "<<(char)66<<std::endl;
    std::cout<<"ascii value for 67 is: "<<(char)67<<std::endl;
    std::cout<<"ascii value for 68 is: "<<(char)68<<std::endl;

    char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
    for(int i = 0; i < 10; i++)
    {
        std::cout<<"ingresa la letra #"<<i+1<<" de la palabra"<<std::endl;
        if(i == 0)
        {
            std::cin>>c1;
        }
        else if(i == 1)
        {
            std::cin>>c2;
        }
        else if(i == 2)
        {
            std::cin>>c3;
        }
        else if(i == 3)
        {
            std::cin>>c4;
        }
        else if(i == 4)
        {
            std::cin>>c5;
        }
        else if(i == 5)
        {
            std::cin>>c6;
        }
        else if(i == 6)
        {
            std::cin>>c7;
        }
        else if(i == 7)
        {
            std::cin>>c8;
        }
        else if(i == 8)
        {
            std::cin>>c9;
        }
        else if(i == 9)
        {
            std::cin>>c10;
        }
    }

    std::cout<<"la palabra es: "<<(int)c1<<(int)c2<<(int)c3<<(int)c4<<(int)c5<<(int)c6<<(int)c7<<(int)c8<<(int)c9<<(int)c10<<std::endl;
    std::cout<<"la palabra es: "<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<std::endl;

    return 0;
}