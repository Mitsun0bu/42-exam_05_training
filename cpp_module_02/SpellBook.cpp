# include "SpellBook.hpp"

// CONSTRUCTOR
SpellBook::SpellBook(void)
{
	return;
}

// DESTRUCTOR
SpellBook::~SpellBook(void)
{
	std::map<std::string, ASpell*>::iterator i;

	for(i = this->spellList.begin(); i != this->spellList.end(); ++i)
		this->spellList.erase(i->first);
	this->spellList.clear();
	return;
}

// METHODS
void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		this->spellList[spell->getName()] = spell->clone();
	return ;
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
		this->spellList.erase(spellName);
	return ;
}

ASpell*	SpellBook::createSpell(std::string const & spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
		return (this->spellList[spellName]->clone());
	return (NULL);
}