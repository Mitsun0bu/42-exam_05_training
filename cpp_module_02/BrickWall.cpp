# include "BrickWall.hpp"

// CONSTRUCTOR
BrickWall::BrickWall(void):
	ATarget("Inconspicuous Red-brick Wall")
{
	return ;
}

// METHOD
BrickWall::~BrickWall(void)
{
	return ;
}

// METHOD
BrickWall*	BrickWall::clone(void)
{
	return (new BrickWall());
}