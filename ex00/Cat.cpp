#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "Cat assignation operator called" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
