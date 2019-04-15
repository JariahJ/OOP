#pragma once

namespace building {
	class house: Building {
	private: int occupants;
	public: house(Color color = Color::BLACK, int _occupants = 0);
	public: house(Color _color, int _occupants);
	public: virtual ~house();
	};
}
