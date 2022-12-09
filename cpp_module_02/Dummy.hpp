# ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		// CONSTRUCTOR
				Dummy(void);
		// COPY	CONSTRUCTOR
				Dummy(Dummy const & src);
		// '=' OPERATOR OVERLAOD
		Dummy&	operator=(Dummy const & src);
		// DESTRUCTOR
		virtual	~Dummy(void);
		// METHOD
		Dummy*	clone(void);
};

# endif