#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	// const Animal *k = new Animal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// std::cout << k->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	// k->makeSound();

	delete j;
	delete i;
	// delete k;

	Dog basic;
	basic.setIdea(0, "I want to play");
	{
		Dog tmp = basic;
		std::cout << "tmp's idea: " << tmp.getIdea(0) << std::endl;
		tmp.setIdea(0, "I want to sleep");
		std::cout << "tmp's idea: " << tmp.getIdea(0) << std::endl;
	}
	std::cout << "basic's idea: " << basic.getIdea(0) << std::endl;

	const Animal *animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}

	return 0;
}
