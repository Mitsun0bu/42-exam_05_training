# include "ATarget.hpp"
# include "ASpell.hpp"

// CONSTRUCTORS
ATarget::ATarget(void)
{
	return ;
}

ATarget::ATarget(std::string type):
	type(type)
{
	return ;
}

// COPY	CONSTRUCTOR
ATarget::ATarget(ATarget const & src)
{
	*this = src;

	return ;
}

// '=' OPERATOR OVERLAOD
ATarget&	ATarget::operator=(ATarget const & src)
{
	this->type = src.type;

	return (*this);
}

// DESTRUCTOR
ATarget::~ATarget(void)
{
	return ;
}

// GETTER
const std::string&	ATarget::getType(void) const
{
	return (this->type);
}

// METHODS
void	ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout
	<< this->getType() << " has been "
	<< spell.getEffects() << "!"
	<< std::endl;

	return ;
}