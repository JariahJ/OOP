#pragma once

namespace building {
	class house : public virtual Building {
	private: int occupants;
	public: house(Color color = Color::BLACK, int occupants = 0);
	public: house(Color _color, int _occupants);
	public: virtual ~house();
	};
}
