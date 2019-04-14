#include "School.h"

namespace building {
	School::School(Color _color, int _students) 
		:color(_color), students(_students)
	{

	}
	School::~School() 
	{

	}
	School::inhabitants() 
	{
		return students;
	}
}