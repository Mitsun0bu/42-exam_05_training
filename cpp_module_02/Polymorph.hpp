# ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
	// CONSTRUCTOR
				Polymorph(void);
	// DESTRUCTOR
				~Polymorph(void);
	// METHODS
	Polymorph*	clone(void);
};

#endif