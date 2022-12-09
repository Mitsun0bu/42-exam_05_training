# ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class ASpell;

class ATarget
{
	public:
		// CONSTRUCTORS
							ATarget(void);
							ATarget(std::string type);
		// COPY	CONSTRUCTOR
							ATarget(ATarget const & src);
		// '=' OPERATOR OVERLAOD
		ATarget&			operator=(ATarget const & src);
		// DESTRUCTOR
							~ATarget(void);
		// GETTER
		const std::string&	getType(void) const;
		// METHODS
		virtual ATarget*	clone(void) = 0;
		void				getHitBySpell(ASpell const & spell) const;

	protected:
		// PRIVATE ATTRIBUTE
		std::string	type;
};

# endif