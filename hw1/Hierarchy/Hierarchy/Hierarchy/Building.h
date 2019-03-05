#pragma once

#include "Color.h" //need to implement color header file (enum type)

namespace House {
	class Building {
	private: const Color color;
	public: Color getColor() const;
	public: virtual void inhabitants() = 0; //abstract function to be overrided
	public: Building(Color color = Color::BLACK); //constructor
	public: virtual ~Building(); //destructor
	};
}