# include "Fwoosh.hpp"

// CONSTRUCTOR
Fwoosh::Fwoosh(void):
	ASpell("Fwoosh", "fwooshed")
{
	return ;
};

// COPY CONSTRUCTOR
Fwoosh::Fwoosh(Fwoosh const & src)
{
	*this = src;
	return ;
}

// '=' OPERATOR OVERLAOD
Fwoosh&	Fwoosh::operator=(Fwoosh const & src)
{
	this->name = src.name;
	this->effects = src.effects;
	return (*this);
}

// METHOD
Fwoosh*	Fwoosh::clone(void)
{
	Fwoosh* fwooshClone = new Fwoosh();
	return (fwooshClone);
}