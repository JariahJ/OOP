#include "Roster.h"
#include <fstream>
#include <iostream>


namespace Wrestling {

	Roster::Roster() {} // useless constructor

	void Roster::readWrestlers()
	{
		std::ifstream in;
		in.open("Wrestlers.txt");
		std::string name;
		std::string _popularity;
		while (!in.eof())
		{
			std::getline(in, name);
			getline(in, _popularity);
			roster.push_back(build(name, stoi(_popularity)));
		}
	}

	Wrestler* Roster::build(std::string name, int pop)
	{
		return new Wrestler(name, pop);
	}

	Roster::~Roster() {};
}