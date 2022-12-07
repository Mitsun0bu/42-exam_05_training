# ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class ASpell;

class ATarget
{
	public:
							ATarget(void);
							ATarget(std::string type);
							~ATarget(void);
							ATarget(ATarget const & src);
		void				operator=(ATarget const & src);
		std::string			type; // NEED TO BE PRIVATE ???
		std::string&		getType() const;
		virtual ATarget*	clone(void) = 0;
		void				getHitBySpell(ASpell const & spell);
};

# endif