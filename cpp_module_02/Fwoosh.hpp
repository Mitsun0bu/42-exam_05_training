# ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		// CONSTRUCTOR
				Fwoosh(void);
		// DESTRUCTOR
				~Fwoosh(void);
		// METHODS
		Fwoosh*	clone(void);
};

#endif