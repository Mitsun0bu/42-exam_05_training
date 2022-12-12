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
		delete this->spellList[i->first];

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
		delete this->spellList[spellName];

	return ;
}

ASpell*	SpellBook::createSpell(std::string const & spellName)
{
	if (this->spellList.find(spellName) != this->spellList.end())
		return (this->spellList[spellName]->clone());

	return (nullptr);
}