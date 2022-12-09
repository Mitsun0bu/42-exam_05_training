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
	ASpell* newSpell;

	if (!spell)
		return ;
	newSpell = spell;
	spellList[newSpell->getName()] = newSpell;
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
	ASpell* newSpell;

	return (newSpell);
}