# include "SpellBook.hpp"

// CONSTRUCTOR
SpellBook::SpellBook(void)
{
	return;
}

// DESTRUCTOR
SpellBook::~SpellBook(void)
{
	return;
}

// METHODS
void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		spellList[spell->getName()] = spell->clone();
	return ;
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	if (spellList.find(spellName) != spellList.end())
		spellList.erase(spellName);
	return ;
}

ASpell*	SpellBook::createSpell(std::string const & spellName)
{
	if (spellList.find(spellName) != spellList.end())
		return (spellList[spellName]->clone());
	return (NULL);
}