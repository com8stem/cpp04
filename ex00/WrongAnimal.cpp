
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a strange sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}