#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	type = other.type;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a generic sound!" << std::endl;
}
