#pragma once

namespace building {
	class HomeSchool: House, School {
	public: Homeschool(Color color=COLOR::BLACK, int occupants=0, int students=0); // default construct
	public: Homeschool(Color _color, int _occupants, int_students); //constructor
	private: int occupants;
	private: int students;
	};
}
