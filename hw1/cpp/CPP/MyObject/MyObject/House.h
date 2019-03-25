#pragma once
#include "Color.h"
#include "buildingMaterial.h"
#include "houseExceptions.h"

namespace house {

	class House {
	private: const Color color;
	private: const buildingMaterial material;
	private: bool locked;
	public: House(Color _color, buildingMaterial _material); // constructor
	public: void lock();
	public: void unlock();
	public: Color getColor() const;
	public: buildingMaterial getMaterial() const;
	public: static const houseExceptions HOUSE_ALREADY_LOCKED;
	public: static const houseExceptions HOUSE_ALREADY_UNLOCKED;
	};
}
