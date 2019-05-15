#pragma once
#include "Roster.h"

namespace Wrestling {

	class Menu {
	public: Menu();
	public: Wrestler *w1;
	public: Wrestler *w2;
	public: void chooseWrestlersMenu();
	public: void chooseMatchMenu();
	public: ~Menu();
	};
}
