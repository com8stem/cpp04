
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type_;

public:
	WrongAnimal();
	~WrongAnimal();
	void makeSound() const; // not virtual
	std::string getType() const;
};

#endif