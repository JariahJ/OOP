#include "Cage.h"
#include "Match.h"

namespace Wrestling {
	Cage::Cage(Wrestler* _wrestler1, Wrestler* _wrestler2)
		:Match(_wrestler1, _wrestler2)
	{

	}

	void Cage::setMatchRating()
	{
		float holder = (((wrestler1->getPopularity() + wrestler2->getPopularity()) / 2.0) + 1) / 10;
		matchRating = float(int(holder * 10 + 0.5)) / 10;
		//+1 for the fact of it being a cage match.. this isn't as entertaining as a ladder match imo
	}

	Cage::~Cage() {};

}