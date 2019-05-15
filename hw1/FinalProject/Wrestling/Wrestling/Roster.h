#pragma once
#include <vector>
#include "Wrestler.h"

namespace Wrestling {

	class Roster{
	public: Roster();
	public: std::vector < Wrestler* > roster;
	public: void readWrestlers();
	public: ~Roster();

	};
 
}