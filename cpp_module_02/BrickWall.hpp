# ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		// CONSTRUCTOR
					BrickWall(void);
		// DESTRUCTOR
					~BrickWall(void);
		// METHOD
		BrickWall*	clone(void);
};

# endif