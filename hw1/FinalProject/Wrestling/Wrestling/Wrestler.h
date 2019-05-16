#pragma once
#include <string>

namespace Wrestling {
	class Wrestler {
	private: /*const*/ std::string name;
	private: /*const*/ int popularity;
	public: Wrestler(std::string _name, int _popularity);
	public: std::string getName() /*const*/;
	public: int getPopularity() /*const*/;
	public: ~Wrestler();
	};
}