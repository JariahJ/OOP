#include "Building.h"
#include "House.h"
#include "School.h"

namespace building {
	HomeSchool::Homeschool(Color _color, int _occupants)
		:Building(_color), School(_color, _occupants), House(_color, _occupants)
	{
	
	}

	HomeSchool::inhabitants() {
		return occupants;
	}
}