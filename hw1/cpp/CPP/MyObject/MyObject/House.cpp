#include "House.h"
#include <iostream>
#include <string>

namespace house {
	House::House(Color _color, buildingMaterial material)
		:locked(true), color(_color), material(_material)
	{

	}
	void House::lock() {
		if (locked == false) {
			std::cout << "locking the house.";
			locked = true;
		}
		else {
			throw HOUSE_ALREADY_LOCKED;
		}
	}
	void House::unlock() {
		if (locked == true) {
			std::cout << "unlocking the house.";
			locked = false;
		}
		else {
			throw HOUSE_ALREADY_UNLOCKED;
		}
	}
	Color House::getColor() const {
		return color;
	}
	buildingMaterial House::getMaterial() const {
		return material;
	}
	const houseExceptions house::HOUSE_ALREADY_LOCKED("Can't lock a house that is already locked.");
	const houseExceptions house::HOUSE_ALREADY_UNLOCKED("Can't unlock a house that is already unlocked.");
}
