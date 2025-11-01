#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	int N = 4;
	const Animal* animals[N];
	
	for(int i = 0; i < N; i++)
	{
		if (i < (N / 2))
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << std::endl;
	}
	
	for (int i = 0; i < N; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
/****************************************/
    std::cout << "\n=== Deep Copy Test ===" << std::endl;

    Dog dog1;
    dog1.getBrain().SetIdea(0, "I want food");
    dog1.getBrain().SetIdea(1, "I want sleep");

    Dog dog2 = dog1;

    std::cout << "Dog1 idea[0]: " << dog1.getBrain().GetIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain().GetIdea(0) << std::endl;

    dog1.getBrain().SetIdea(0, "I changed my mind!");

    std::cout << "After modifying Dog1:" << std::endl;
    std::cout << "Dog1 idea[0]: " << dog1.getBrain().GetIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain().GetIdea(0) << std::endl;

    std::cout << "\n=== End of Program ===" << std::endl;

    return 0;
}