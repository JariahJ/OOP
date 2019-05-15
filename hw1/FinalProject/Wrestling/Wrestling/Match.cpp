#include "Match.h"
#include "Wrestler.h"

namespace Wrestling {
	Match::Match(Wrestler _wrestler1, Wrestler _wrestler2)
		:wrestler1(_wrestler1), wrestler2(_wrestler2)
	{

	}
	float Match::getMatchRating() {
		return matchRating;
	}

	Match::~Match() {};
}