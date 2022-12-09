# ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <map>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	public:
		// CONSTRUCTOR
							TargetGenerator(void);
		// DESTRUCTOR
							~TargetGenerator(void);
		//METHODS
		void				learnTargetType(ATarget* target);
		void				forgetTargetType(std::string const & targetName);
		ATarget*			createTarget(std::string const & targetName);
		// ATTRIBUTE
		std::map<std::string, ATarget*>	targetList;
	private:
		// PRIVATE COPY CONSTRUCTOR
							TargetGenerator(TargetGenerator const & src);
		// PRIVATE '=' OPERATOR OVERLAOD
		TargetGenerator&	operator=(TargetGenerator const & src);
};

# endif