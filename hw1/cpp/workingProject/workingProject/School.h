#pragma once

namespace building {
	class School : Building {
	public: int students;
	public: School(Color color = Color::BLACK, int students = 0);
	public: School(Color _color, int _students);
	};
}
