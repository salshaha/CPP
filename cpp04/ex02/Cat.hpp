#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Brain *mind;
    public:
        Cat();
        Cat(const Cat& copy);
        Cat(const std::string& type);
        Cat &operator=(const Cat &copy);
        ~Cat();
    
        void makeSound() const;
        Brain&	getBrain( void ) const;
};


#endif