#include <iostream>

int main()
{
    int x,y;
    x=0;
    y=0;

    char operation;

    std::cin>>x;
    std::cin>>y;
    std::cin>>operation;

    (x==y)? std::cout << x+y : std::cout << x-y;

    std::cout << std::endl;

    switch (operation)
    {
    case '+':
        std::cout << x+y;
        break;
    case '-':
        std::cout << x-y;
        break;
    case '*':  
        std::cout << x*y;
        break;
    case '/':   
        std::cout << x/y;
        break;  
    case '%':   
        std::cout << x%y;
        break;
    
    default:
        std::cout << "Invalid operation";
        break;
    }



    return 0;
}