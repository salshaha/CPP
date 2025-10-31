#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& copy);
        Animal &operator=(const Animal &copy);
        ~Animal();
    
        virtual void makeSound() const;
        void setType(std::string &type);
        const std::string& getType(void) const;
};


#endif