# ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"

class ASpell;

class SpellBook
{
	public:
		// CONSTRUCTOR
					SpellBook(void);
		// DESTRUCTOR
					~SpellBook(void);
		// METHODS
		void		learnSpell(ASpell* spell);
		void		forgetSpell(std::string const & spellName);
		ASpell*		createSpell(std::string const & spellName);
		// PUBLIC ATTRIBUTE
		std::map<std::string, ASpell*>	spellList;

	private:
		// PRIVATE COPY CONSTRUCTOR
					SpellBook(SpellBook const & src);
		// PRIVATE '=' OPERATOR OVERLOAD
		SpellBook&	operator=(SpellBook const & src);
};

# endif