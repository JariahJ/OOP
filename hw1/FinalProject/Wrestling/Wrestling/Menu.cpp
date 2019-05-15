#include <iostream>
#include <algorithm>
#include "Menu.h"


namespace Wrestling {
	Menu::Menu() {};

	void Menu::chooseWrestlersMenu()
	{
		Roster *r = new Roster();
		std::cout << "This program will rate a wrestling"
			"match based on who fights and what type of match it is << " << std::endl;
		std::cout << "Who would you like to have wrestle one another?\n" << std::endl;
		std::cout << "All possible wrestlers are:" << std::endl;
		 
		r->readWrestlers();

		for (int i = 0; i < r->roster.size(); i++)
		{
			std::cout << r->roster[i]->getName() << std::endl;
		}
		first:
		std::cout << "Enter your first wrestlers name now: " << std::endl;
		std::string name1;

		if (std::find(r->roster.begin(), r->roster.end(), name1) != r->roster.end()) {
			/* roster contains name1 */
		}
		else {
			std::cout << "UNKNOWN WRESTLER" << std::endl;
			goto first;
			/* roster does not contain name1 */
		}

		second:
		std::cout << "Enter your second wrestlers name now: " << std::endl;
		std::string name2;

		if (std::find(r->roster.begin(), r->roster.end(), name2) != r->roster.end()) {
			/* roster contains name2 */
		}
		else {
			std::cout << "UNKNOWN WRESTLER" << std::endl;
			goto second;
			/* roster does not contain name2 */
		}
		int popularity1;
		int popularity2;

		for (int i = 0; i < r->roster.size(); i++)
		{
			if (r->roster[i]->getName() == name1) {
				popularity1 = r->roster[i]->getPopularity();
			}
		}

		for (int i = 0; i < r->roster.size(); i++)
		{
			if (r->roster[i]->getName() == name2) {
				popularity2 = r->roster[i]->getPopularity();
			}
		}

		w1 = new Wrestler(name1, popularity1);
		w2 = new Wrestler(name2, popularity2);

	}

	void Menu::chooseMatchMenu()
	{
		char matchType;
		std::cout << "What type of match would you like?: " << std::endl;
		std::cout << "Press 1 for Ladder Match" << std::endl;
		std::cout << "Press 2 for Cage Match" << std::endl;
		if (matchType == '1')
		{

		}
	}
	Menu::~Menu() {};
}