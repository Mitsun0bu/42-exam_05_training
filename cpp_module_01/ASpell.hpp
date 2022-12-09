# ifndef ASPELL_HPP
# define ASPELL_HPP

# import <string>
# import <iostream>

class ATarget;

class ASpell
{
	public:
		// CONSTRUCTORS
						ASpell(void);
						ASpell(std::string name, std::string effects);
		// COPY	CONSTRUCTOR
						ASpell(ASpell const & src);
		// '=' OPERATOR OVERLAOD
		ASpell&			operator=(ASpell const & src);
		// DESTRUCTOR
						~ASpell(void);
		// GETTERS
		std::string		getName(void) const;
		std::string		getEffects(void) const;
		// METHODS
		virtual ASpell*	clone(void) = 0;
		void			launch(ATarget const & target);

	protected:
		// PROTECTED ATTRIBUTES
		std::string		name;
		std::string		effects;
};

# endif