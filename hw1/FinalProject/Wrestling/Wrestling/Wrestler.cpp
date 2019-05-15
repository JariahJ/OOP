#include "Wrestler.h"

namespace Wrestling {

	Wrestler::Wrestler(std::string _name, int _popularity)
		:name(_name), popularity(_popularity)
	{

	}

	std::string Wrestler::getName() const 
	{
		return name;
	}

	int Wrestler::getPopularity() const
	{
		return popularity;
	}

	Wrestler::~Wrestler() {};
}