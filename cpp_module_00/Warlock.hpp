# ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	public:

					Warlock(std::string name, std::string title);
					~Warlock(void);
		std::string	getName(void)	const;
		std::string	getTitle(void)	const;
		void		setTitle(const std::string& title);
		void		introduce(void)	const;

	private:

					Warlock(void);
					Warlock(Warlock const & src);
		Warlock&	operator=(Warlock const & src);
		std::string	name;
		std::string	title;
};

# endif