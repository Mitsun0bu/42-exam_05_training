# include "BrickWall.hpp"

// CONSTRUCTOR
BrickWall::BrickWall(void):
	ATarget("Inconspicuous Red-brick Wall")
{
	return ;
}

// COPY CONSTRUCTOR
BrickWall::BrickWall(BrickWall const & src)
{
	*this = src;
	return ;
}

// '=' OPERATOR OVERLAOD
BrickWall&	BrickWall::operator=(BrickWall const & src)
{
	this->type = src.type;
	return (*this);
}

// METHOD
BrickWall*	BrickWall::clone(void)
{
	BrickWall* BrickWallClone = new BrickWall();
	return (BrickWallClone);
}

// METHOD
BrickWall::~BrickWall(void)
{
	return ;
}
