#include <iostream>
#include <string>
#include <list>

class Person
{

private:
    std::string name;
    int age;
    std::list<std::string> hobbies;

public:

    Person()
    {
        name = "";
        age = 0;
        hobbies = {};
    }

    Person(std::string name1, int age1, std::list<std::string> hobbies1)
    {
        name = name1;
        age = age1;
        hobbies = hobbies1;
    }


    std::string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    std::list<std::string> gethobbies()
    {
        return hobbies;
    }
    
    void setname(std::string name)
    {
        this->name = name;
    }

    void setage(int age)
    {
        this->age = age;
    }

    void addhobby(std::string hobby)
    {
        hobbies.push_back(hobby);
    }

    void removehobby(std::string hobby)
    {
        hobbies.remove(hobby);
    }

    void info()
    {
        std::cout<<"name: "<<name<<std::endl;
        std::cout<<"age: "<<age<<std::endl;
        std::cout<<"hobbies: ";
        std::cout<<std::endl;
        for(std::string hob: hobbies)
        {
            std::cout<<hob<<std::endl;
        }
    }

};

class Student: public Person
{
    private:
        std::string school;
        std::string major;
        int graduation_year;


    public:

    Student()
    {
        school = "";
        major = "";
        graduation_year = 0;
    }

    Student(std::string name, int age, std::list<std::string> hobbies): Person(name, age, hobbies)
    {
        school = "";
        major = "";
        graduation_year = 0;
    }
   
    void set_graduation_year(int graduation_year)
    {
        this->graduation_year = graduation_year;
    }

    void set_school(std::string school)
    {
        this->school = school;
    }

    void set_major(std::string major)
    {
        this->major = major;
    }

    void info()
    {
        std::cout<<"name: "<<getname()<<std::endl;
        std::cout<<"age: "<<getage()<<std::endl;
        std::cout<<"hobbies: ";
        std::cout<<std::endl;
        for(std::string hob: gethobbies())
        {
            std::cout<<hob<<std::endl;
        }
        std::cout<<"school: "<<school<<std::endl;
        std::cout<<"major: "<<major<<std::endl;
        std::cout<<"graduation_year: "<<graduation_year<<std::endl;
    }


};

int main()
{

    Person p1;
    p1.setname("Gama");
    p1.setage(20);
    p1.addhobby("running");
    p1.addhobby("reading");
    p1.addhobby("coding");
    p1.info();

    std::cout<<std::endl;

    Person p2("Gama_M", 21, {"idk", "idc", "idm", "idg", "idr", "idt", "idh", "idj", "idk", "idl", "idz", "idx", "idc", "idv", "idb", "idn", "idm"});
    p2.info();

    std::cout<<std::endl;

    Student s1;
    s1.setname("Gama");
    s1.setage(20);
    s1.addhobby("running");
    s1.addhobby("reading");
    s1.addhobby("coding");
    s1.set_school("ITESM");
    s1.set_major("Computer Science");
    s1.set_graduation_year(2025);
    s1.info();


        





    return 0;
}