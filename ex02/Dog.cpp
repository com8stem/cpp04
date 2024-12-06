#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
		delete this->brain;
		this->brain = new Brain();
	}
	std::cout << "Dog assignation operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
	brain->ideas[index] = idea;
}

std::string Dog::getIdea(int index) const
{
	return brain->ideas[index];
}
