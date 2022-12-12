# ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
	// CONSTRUCTOR
				Fireball(void);
	// DESTRUCTOR
				~Fireball(void);
	// METHODS
	Fireball*	clone(void);
};

#endif