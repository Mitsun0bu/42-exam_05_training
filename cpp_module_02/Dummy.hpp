# ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		// CONSTRUCTOR
				Dummy(void);
		// DESTRUCTOR
				~Dummy(void);
		// METHOD
		Dummy*	clone(void);
};

# endif