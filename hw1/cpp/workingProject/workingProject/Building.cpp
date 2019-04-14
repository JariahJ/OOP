#include "Building.h"

namespace building {

 Color Building::getColor() const {
	return color;
}


Building::Building(Color _color)
: color(_color)
{

}
		//destructor
Building::~Building() {

	}
}