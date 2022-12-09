# ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		// CONSTRUCTOR
				BrickWall(void);
		// COPY	CONSTRUCTOR
				BrickWall(BrickWall const & src);
		// '=' OPERATOR OVERLAOD
		BrickWall&	operator=(BrickWall const & src);
		// DESTRUCTOR
		virtual	~BrickWall(void);
		// METHOD
		BrickWall*	clone(void);
};

# endif