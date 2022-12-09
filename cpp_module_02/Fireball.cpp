# include "Fireball.hpp"

// CONSTRUCTOR
Fireball::Fireball(void):
	ASpell("Fireball", "burnt to a crisp")
{
	return ;
};

// COPY CONSTRUCTOR
Fireball::Fireball(Fireball const & src)
{
	*this = src;
	return ;
}

// '=' OPERATOR OVERLAOD
Fireball&	Fireball::operator=(Fireball const & src)
{
	this->name = src.name;
	this->effects = src.effects;
	return (*this);
}

// METHOD
Fireball*	Fireball::clone(void)
{
	Fireball* fireballClone = new Fireball(*this);
	return (fireballClone);
}

// DESTRUCTOR
Fireball::~Fireball(void)
{
	return ;
}