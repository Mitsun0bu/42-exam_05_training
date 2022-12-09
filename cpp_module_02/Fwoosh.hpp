# ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	// CONSTRUCTOR
			Fwoosh(void);
	// COPY CONSTRUCTOR
			Fwoosh(Fwoosh const & src);
	// '=' OPERATOR OVERLAOD
	Fwoosh&	operator=(Fwoosh const & src);
	// DESTRUCTOR
	virtual	~Fwoosh(void);
	// METHODS
	Fwoosh*	clone(void);
};

#endif