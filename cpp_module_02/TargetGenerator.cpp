# include "TargetGenerator.hpp"

// CONSTRUCTOR
TargetGenerator::TargetGenerator(void)
{
	return ;
}

// DESTRUCTOR
TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget*>::iterator i;

	for(i = this->targetList.begin(); i != this->targetList.end(); ++i)
		delete this->targetList[i->first];
	this->targetList.clear();

	return ;
}

// METHODS
void	TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		this->targetList[target->getType()] = target->clone();

	return ;
}

void	TargetGenerator::forgetTargetType(std::string const & targetName)
{
	if(this->targetList.find(targetName) != this->targetList.end())
		delete this->targetList[targetName];

	return ;
}

ATarget*	TargetGenerator::createTarget(std::string const & targetName)
{
	if(this->targetList.find(targetName) != this->targetList.end())
		return (this->targetList[targetName]->clone());

	return (nullptr);
}