#include "Warlock.hpp"

// CONSTRUCTOR
Warlock::Warlock(std::string name, std::string title):
	name(name), title(title)
{
	std::cout
	<< this->name << ": This looks like another boring day."
	<< std::endl;

	spellBook = new SpellBook();

	return ;
}

// DESTRUCTOR
Warlock::~Warlock(void)
{
	std::cout
	<< this->name << ": My job here is done!"
	<< std::endl;

	delete spellBook;

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

// METHODS
void	Warlock::introduce(void) const
{
	std::cout
	<< this->name << ": I am " << this->name
	<< ", " << title
	<< std::endl;

	return ;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		this->spellBook->learnSpell(spell);

	return ;
}

void	Warlock::forgetSpell(std::string spellName)
{
	this->spellBook->forgetSpell(spellName);

	return ;
}

void	Warlock::launchSpell(std::string spellName, ATarget& target)
{
	ASpell* spell = this->spellBook->createSpell(spellName);

	if (spell != nullptr)
		target.getHitBySpell(*this->spellBook->spellList[spellName]);

	delete spell;

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
	this->name	= src.name;
	this->title	= src.title;

	return (*this);
}