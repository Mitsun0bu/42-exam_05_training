# include "Polymorph.hpp"

// CONSTRUCTOR
Polymorph::Polymorph(void):
	ASpell("Polymorph", "turned into a critter")
{
	return ;
};

// DESTRUCTOR
Polymorph::~Polymorph(void)
{
	return ;
}

// METHOD
Polymorph*	Polymorph::clone(void)
{
	return (new Polymorph());
}
