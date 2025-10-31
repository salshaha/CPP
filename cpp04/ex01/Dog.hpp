#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
    private:
        Brain *mind;
    public:
        Dog();
        Dog(const Dog& copy);
        Dog(const std::string& type);
        Dog &operator=(const Dog &copy);
        ~Dog();
    
        void makeSound() const;
};


#endif