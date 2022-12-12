# include "Fwoosh.hpp"

// CONSTRUCTOR
Fwoosh::Fwoosh(void):
	ASpell("Fwoosh", "fwooshed")
{
	return ;
};

// DESTRUCTOR
Fwoosh::~Fwoosh(void)
{
	return ;
}

// METHOD
Fwoosh*	Fwoosh::clone(void)
{
	return (new Fwoosh);
}
