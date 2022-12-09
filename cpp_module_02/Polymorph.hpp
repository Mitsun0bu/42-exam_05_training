# ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
	// CONSTRUCTOR
			Polymorph(void);
	// COPY CONSTRUCTOR
			Polymorph(Polymorph const & src);
	// '=' OPERATOR OVERLAOD
	Polymorph&	operator=(Polymorph const & src);
	// DESTRUCTOR
	virtual	~Polymorph(void);
	// METHODS
	Polymorph*	clone(void);
};

#endif