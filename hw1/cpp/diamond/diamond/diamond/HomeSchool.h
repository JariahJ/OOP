#pragma once

namespace building {
	class HomeSchool: House, School {
	public: Homeschool(Color color=COLOR::BLACK, int occupants=0); // default construct
	public: Homeschool(Color _color, int _occupants); //constructor
	private: int occupants;
	};
}
