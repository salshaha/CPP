#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str; //pointer to the str
    std::string &stringREF = str; //reference to the str

    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR:      " << stringPTR << std::endl;//the Memory of the str and if we put &str_p we will take the Memory of the str_p itself
    std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    return (0);
}
