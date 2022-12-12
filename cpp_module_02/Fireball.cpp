# include "Fireball.hpp"

// CONSTRUCTOR
Fireball::Fireball(void):
	ASpell("Fireball", "burnt to a crisp")
{
	return ;
};

// DESTRUCTOR
Fireball::~Fireball(void)
{
	return ;
}

// METHOD
Fireball*	Fireball::clone(void)
{
	return (new Fireball());
}