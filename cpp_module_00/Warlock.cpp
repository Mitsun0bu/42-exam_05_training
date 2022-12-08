#include "Warlock.hpp"

// CONSTRUCTOR
Warlock::Warlock(std::string name, std::string title):
	name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
	return ;
}

// DESTRUCTOR
Warlock::~Warlock(void)
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	return ;
}

// GETTERS
std::string	Warlock::getName(void) const
{
	return (this->name);
}

std::string	Warlock::getTitle(void) const
{
	return (this->title);
}

// SETTER
void	Warlock::setTitle(const std::string& title)
{
	this->title = title;
	return;
}

// METHOD
void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << title << std::endl;
	return ;
}

// PRIVATE DEFAULT CONSTRUCTOR
Warlock::Warlock(void)
{
	return ;
}

// PRIVATE COPY CONSTRUCTOR
Warlock::Warlock(Warlock const & src)
{
	*this = src;
	return ;
}

// PRIVATE '=' OPERATOR OVERLAOD
Warlock&	Warlock::operator=(Warlock const & src)
{
	this->name = src.name;
	this->title = src.title;
	return (*this);
}