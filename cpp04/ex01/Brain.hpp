#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string idea[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain &operator=(const Brain &copy);
        ~Brain();
    
        virtual void makeSound() const;
        void setIdea(std::string &type);
        const std::string& getIdea(void) const;
};


#endif