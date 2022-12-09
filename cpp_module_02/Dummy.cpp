# include "Dummy.hpp"

// CONSTRUCTOR
Dummy::Dummy(void):
	ATarget("Target Practice Dummy")
{
	return ;
}

// COPY CONSTRUCTOR
Dummy::Dummy(Dummy const & src)
{
	*this = src;
	return ;
}

// '=' OPERATOR OVERLAOD
Dummy&	Dummy::operator=(Dummy const & src)
{
	this->type = src.type;
	return (*this);
}

// METHOD
Dummy*	Dummy::clone(void)
{
	Dummy* dummyClone = new Dummy();
	return (dummyClone);
}

// METHOD
Dummy::~Dummy(void)
{
	return ;
}
