#pragma once
#include "Match.h"


namespace Wrestling{
	class Ladder: public Match {
	public: Ladder(Wrestler _wrestler1, Wrestler _wrestler2);
	public: virtual void setMatchRating() override;
	public: ~Ladder();
	};
}
