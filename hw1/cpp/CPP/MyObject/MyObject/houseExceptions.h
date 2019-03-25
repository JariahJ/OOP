#pragma once
#include <string>
#include <iostream>

namespace house {
	class houseExceptions {
	private: const std::string message;
	public: houseExceptions(std::string _message)
		:message(_message)
	{

	}
	public: void getMessage() const{
		std::cout << message << endl;
	}
	};
}
