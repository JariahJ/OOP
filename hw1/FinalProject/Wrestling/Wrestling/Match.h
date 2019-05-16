#pragma once
#include "Wrestler.h"

namespace Wrestling {
	class Match {
	public: Wrestler* wrestler1;
	public: Wrestler* wrestler2;
	protected: float matchRating;
	public: Match(Wrestler* _wrestler1, Wrestler* _wrestler2);
	public: virtual void setMatchRating() = 0;
	public: float getMatchRating();
	public: ~Match();

	};
}
