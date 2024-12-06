
#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructer" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructer" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructer" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}