#pragma once
#include <string>
#include "Roster.h"
#include "Ladder.h"
#include "Cage.h"
#include "Menu.h"


namespace Wrestling {

	class PPV {
	public: PPV();
	public: Match *match;
	public: Wrestler *wrestler1;
	public: Wrestler *wrestler2;
	public: void Begin();
	public: ~PPV();
	};
}