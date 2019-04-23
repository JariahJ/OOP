#pragma once

namespace building {
	class Building {
	protected: const Color color;
	public: Color getColor() const;
	public: virtual void inhabitants() = 0; //abstract function to be overrided
	public: Building(Color color = Color::BLACK); //default constructor
	public: Building(Color _color); // constructor
	public: virtual ~Building(); //destructor
	};
}