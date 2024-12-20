#include "Animal.hpp"

Animal::Animal() : type_("Animal")
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	type_ = other.type_;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type_ = other.type_;
	}
	std::cout << "Animal assignation operator called" << std::endl;
	return *this;
}

std::string Animal::getType() const
{
	return type_;
}
