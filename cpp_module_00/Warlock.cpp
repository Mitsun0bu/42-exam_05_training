#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):
	name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::~Warlock(void)
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	return ;
}

std::string	Warlock::getName(void) const
{
	return (this->name);
}

std::string	Warlock::getTitle(void) const
{
	return (this->title);
}

void	Warlock::setTitle(const std::string& title)
{
	this->title = title;
	return;
}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << title << std::endl;
	return ;
}