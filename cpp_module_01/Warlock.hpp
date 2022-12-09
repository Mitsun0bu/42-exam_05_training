# ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>
# include <iterator>
# include "ASpell.hpp"
# include "ATarget.hpp"


class ASpell;
class ATarget;

class Warlock
{
	public:
		// CONSTRUCTOR
					Warlock(std::string name, std::string title);
		// DESTRUCTOR
					~Warlock(void);
		// GETTERS
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		// SETTERS
		void		setTitle(const std::string& title);
		// METHODS
		void		introduce(void)	const;
		void		learnSpell(ASpell* spell);
		void		forgetSpell(std::string spellName);
		void		launchSpell(std::string spellName, ATarget& target);
		// PUBLIC ATTRIBUTE
		std::map<std::string, ASpell*>	spellList;

	private:
		// PRIVATE DEFAULT CONSTRUCTOR
					Warlock(void);
		// PRIVATE COPY CONSTRUCTOR
					Warlock(Warlock const & src);
		// PRIVATE '=' OPERATOR OVERLAOD
		Warlock&	operator=(Warlock const & src);
		// PRIVATE ATTRIBUTES
		std::string						name;
		std::string						title;
};

# endif