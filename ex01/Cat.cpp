#include "Cat.hpp"

Cat::Cat()
{
	type_ = "Cat";
	brain_ = new(std::nothrow) Brain();
	if (brain_ == NULL)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		std::exit(1);
	}
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	type_ = other.type_;
	brain_ = new(std::nothrow) Brain(*other.brain_);
	if (brain_== NULL)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		std::exit(1);
	}
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		type_ = other.type_;
		delete this->brain_;
		this->brain_ = new(std::nothrow) Brain(*other.brain_);
		if (brain_ == NULL)
		{
			std::cerr << "Failed to allocate memory for brain" << std::endl;
			std::exit(1);
		}
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
	brain_->ideas[index] = idea;
}

std::string Cat::getIdea(int index) const
{
	return brain_->ideas[index];
}
