#include "Roster.h"
#include <fstream>


namespace Wrestling {

	Roster::Roster() {} // useless constructor

	void Roster::readWrestlers()
	{
		std::ifstream in;
		in.open("Wrestlers.txt");
		std::string name;
		int _popularity;
		while (!in.eof())
		{
			Wrestler *holder;
			std::getline(in, name);
			in >> _popularity;
			holder = new Wrestler(name, _popularity);
			roster.push_back(holder);
			delete holder;
		}
	}

	Roster::~Roster() {};
}