# include "Polymorph.hpp"

// CONSTRUCTOR
Polymorph::Polymorph(void):
	ASpell("Polymorph", "turned into a critter")
{
	return ;
};

// COPY CONSTRUCTOR
Polymorph::Polymorph(Polymorph const & src)
{
	*this = src;
	return ;
}

// '=' OPERATOR OVERLAOD
Polymorph&	Polymorph::operator=(Polymorph const & src)
{
	this->name = src.name;
	this->effects = src.effects;
	return (*this);
}

// METHOD
Polymorph*	Polymorph::clone(void)
{
	Polymorph* PolymorphClone = new Polymorph();
	return (PolymorphClone);
}

// DESTRUCTOR
Polymorph::~Polymorph(void)
{
	return ;
}