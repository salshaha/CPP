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
        virtual ~Brain();
    
        void SetIdea(int index , std::string idea);
        std::string GetIdea(int index) const;
        void printIdeas();
};


#endif