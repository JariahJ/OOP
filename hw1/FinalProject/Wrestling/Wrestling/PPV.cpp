#include "PPV.h"

namespace Wrestling {

	PPV::PPV() {};

	void PPV::Begin() {
		Menu *m = new Menu();
		Roster *r = new Roster();
		wrestler1 = m->w1;
		wrestler2 = m->w2;

		char choice;
		r->readWrestlers();
		m->chooseWrestlersMenu();
		m->chooseMatchMenu();
	}

	PPV::~PPV() {};
}