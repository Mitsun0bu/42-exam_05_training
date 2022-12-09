# ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
	// CONSTRUCTOR
			Fireball(void);
	// COPY CONSTRUCTOR
			Fireball(Fireball const & src);
	// '=' OPERATOR OVERLAOD
	Fireball&	operator=(Fireball const & src);
	// DESTRUCTOR
	virtual	~Fireball(void);
	// METHODS
	Fireball*	clone(void);
};

#endif