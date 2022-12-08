# ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

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
		// METHOD
		void		introduce(void)	const;

	private:
		// PRIVATE DEFAULT CONSTRUCTOR
					Warlock(void);
		// PRIVATE COPY CONSTRUCTOR
					Warlock(Warlock const & src);
		// PRIVATE '=' OPERATOR OVERLAOD
		Warlock&	operator=(Warlock const & src);
		// PRIVATE ATTRIBUTES
		std::string	name;
		std::string	title;
};

# endif