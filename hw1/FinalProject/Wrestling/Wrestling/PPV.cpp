#include "PPV.h"

namespace Wrestling {

	PPV::PPV() {};

	void PPV::Begin() {
		Menu *menu = new Menu();

		wrestler1 = menu->w1;
		wrestler2 = menu->w2;

		menu->chooseWrestlersMenu();
		menu->chooseMatchMenu();
		
	}

	PPV::~PPV() {};
}