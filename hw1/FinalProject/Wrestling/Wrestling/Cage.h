#pragma once
#include "Match.h"


namespace Wrestling {

	class Cage: public Match {
	public: Cage(Wrestler _wrestler1, Wrestler _wrestler2);
	public: virtual void setMatchRating() override;
	public: ~Cage();

	};
}
