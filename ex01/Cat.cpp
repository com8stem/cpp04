#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Cat assignation operator called" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
	brain->ideas[index] = idea;
}

std::string Cat::getIdea(int index) const
{
	return brain->ideas[index];
}
