# include "Dummy.hpp"

// CONSTRUCTOR
Dummy::Dummy(void):
	ATarget("Target Practice Dummy")
{
	return ;
}

// DESTRUCTOR
Dummy::~Dummy(void)
{
	return ;
}

// METHOD
Dummy*	Dummy::clone(void)
{
	return (new Dummy());
}