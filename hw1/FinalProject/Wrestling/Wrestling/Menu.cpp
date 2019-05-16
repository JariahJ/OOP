#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include "Menu.h"
#include "Ladder.h"
#include "Cage.h"




namespace Wrestling {
	Menu::Menu() {};

	void Menu::chooseWrestlersMenu()
	{
		Roster *r = new Roster();
		std::cout << "This program will rate a wrestling"
			" match based on who fights and what type of match it is " << std::endl;
		std::cout << "Who would you like to have wrestle one another?\n" << std::endl;
		std::cout << "All possible wrestlers are:" << std::endl;

		r->readWrestlers();
		
		for (int i = 0; i < r->roster.size(); i++)
		{
			std::cout << r->roster[i]->getName() << std::endl;
		}


		std::string name1;
		std::string name2;
		int popularity1;
		int popularity2;
		bool found = false;
		
		while (!found) {
			std::cout << "Enter your first wrestlers name now: " << std::endl;
			getline(std::cin, name1);
			for (int i = 0; i < r->roster.size(); i++)
			{
				if (r->roster[i]->getName() == name1) {
					found = true;
					popularity1 = r->roster[i]->getPopularity();
				}
			}
		}
		
		found = false;
		while (!found) {
			std::cout << "Enter your Second wrestlers name now: " << std::endl;
			getline(std::cin, name2);
			for (int i = 0; i < r->roster.size(); i++)
			{
				if (r->roster[i]->getName() == name2) {
					found = true;
					popularity2 = r->roster[i]->getPopularity();
				}
			}
		}
		

	

		w1 = new Wrestler(name1, popularity1);
		w2 = new Wrestler(name2, popularity2);
		

	}

	void Menu::chooseMatchMenu()
	{
		char matchType;
		bool correctInput = false;
		std::cout << "What type of match would you like?: " << std::endl;
		while (!correctInput) {
			std::cout << "Press 1 for Ladder Match" << std::endl;
			std::cout << "Press 2 for Cage Match" << std::endl;
			std::cin >> matchType;
			if (matchType == '1') {
				correctInput = true;
				Ladder* Lptr = new Ladder(w1, w2);
				Lptr->setMatchRating();
				std::cout << Lptr->getMatchRating() << " out of 10." << std::endl;
				delete Lptr;
			}
			else if (matchType == '2') {
				correctInput = true;
				Cage* Cptr = new Cage(w1, w2);
				Cptr->setMatchRating();
				std::cout << Cptr->getMatchRating() << " out of 10." << std::endl;
				delete Cptr;
			}
			
		}


	}
	Menu::~Menu() {};
}