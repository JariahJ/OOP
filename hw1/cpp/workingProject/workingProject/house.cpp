#include "House.h"

namespace building {
	house::house(Color _color, int _occupants)
		: color(_color), occupants(_occupants)
	{

	}
	house::inhabitants() 
	{
		return occupants;
	}
	house::~house() {

	}
}