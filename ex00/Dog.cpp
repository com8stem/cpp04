#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "Dog assignation operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}
