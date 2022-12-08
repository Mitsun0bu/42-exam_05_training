# include "ASpell.hpp"

// CONSTRUCTORS
ASpell::ASpell(void)
{
	return ;
}

ASpell::ASpell(std::string name, std::string effects):
	name(name), effects(effects)
{
	return ;
}

// COPY	CONSTRUCTOR
ASpell::ASpell(ASpell const & src)
{
	*this = src;
	return ;
}

// PRIVATE '=' OPERATOR OVERLAOD
ASpell&	ASpell::operator=(ASpell const & src)
{
	this->name = src.getName();
	this->name = src.getEffects();
	return (*this);
}

// DESTRUCTOR
ASpell::~ASpell(void)
{
	return ;
}

// GETTERS
std::string	ASpell::getName(void) const
{
	return(this->name);
}

std::string	ASpell::getEffects(void) const
{
	return (this->effects);
}

// METHOD
void	ASpell::launch(ATarget const & target)
{
	return ;
}