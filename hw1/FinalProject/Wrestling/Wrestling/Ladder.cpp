#include "Ladder.h"

namespace Wrestling {
	Ladder::Ladder(Wrestler* _wrestler1, Wrestler* _wrestler2)
		:Match(_wrestler1, _wrestler2)
	{

	}

	void Ladder::setMatchRating()
	{
		float holder = (((wrestler1->getPopularity() + wrestler2->getPopularity()) / 2.0) + 3)/10;
		matchRating = float(int(holder * 10 + 0.5)) / 10;
		// the 3 is because its a ladder match
	}

	Ladder::~Ladder() {};
}