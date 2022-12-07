# ifndef ASPELL_HPP
# define ASPELL_HPP

# import <string>
# import <iostream>

class ATarget;

class ASpell
{
	public:
						ASpell(void);
						ASpell(std::string name, std::string effects);
						~ASpell(void);
						ASpell(ASpell const & src);
		void			operator=(ASpell const & src);
		std::string		getName(void) const;
		std::string		getEffects(void) const;
		virtual ASpell*	clone(void) = 0;
		void			launch(ATarget const & target);

	protected:

		std::string		name;
		std::string		effects;
};

# endif