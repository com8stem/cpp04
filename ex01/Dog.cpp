#include "Dog.hpp"

Dog::Dog()
{
	type_ = "Dog";
	brain_ = new(std::nothrow) Brain();
	if (brain_ == NULL)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		std::exit(1);
	}
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain_;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type_ = other.type_;
	brain_ = new(std::nothrow) Brain(*other.brain_);
	if (brain_ == NULL)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		std::exit(1);
	}
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain_;
		brain_ = new(std::nothrow) Brain(*other.brain_);
		if (brain_ == NULL)
		{
			std::cerr << "Failed to allocate memory for brain" << std::endl;
			std::exit(1);
		}
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
	brain_->ideas[index] = idea;
}

std::string Dog::getIdea(int index) const
{
	return brain_->ideas[index];
}
