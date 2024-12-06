
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow! Meow! (but from WrongCat)" << std::endl;
}