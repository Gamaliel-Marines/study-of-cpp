#include <iostream>
#include <string>
#include <list>

class Person
{
public:
    std::string name;
    int age;
    std::list<std::string> repositories;
};

int main()
{

    Person p1;
    p1.name = "Gama";
    p1.age = 20;
    p1.repositories = {"OOP1.cpp", "OOP2.cpp", "OOP3.cpp"};

    std::cout<<"name: "<<p1.name<<std::endl;
    std::cout<<"age: "<<p1.age<<std::endl;
    std::cout<<"repositories: ";
    std::cout<<std::endl;
    for(std::string repo: p1.repositories)
    {
        std::cout<<repo<<std::endl;
    }
        





    return 0;
}