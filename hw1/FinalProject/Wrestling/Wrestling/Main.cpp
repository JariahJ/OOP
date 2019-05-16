#include <iostream>
#include <assert.h>
#include "PPV.h"


using namespace Wrestling;
using namespace std;

void wrestlerTest1()
{
	PPV *test1 = new PPV();

	test1->wrestler1 = new Wrestler("Booker T", 60);
	assert(test1->wrestler1->getName() == "Booker T");
	assert(test1->wrestler1->getPopularity() == 60);
	cout << "ALL OF TEST 1 TESTS PASSED" << endl;

}
void wrestlerTest2()
{
	PPV *test2 = new PPV();

	test2->wrestler1 = new Wrestler("John Cena", 90);
	assert(test2->wrestler1->getName() == "John Cena");
	assert(test2->wrestler1->getPopularity() == 90);
	cout << "ALL OF TEST 2 TESTS PASSED" << endl;
}

void ratingTest1()
{
	Wrestler* w1 = new Wrestler("Hulk Hogan", 90);
	Wrestler* w2 = new Wrestler("Bautista", 75);
	Ladder* Lptr = new Ladder(w1, w2);
	Lptr->setMatchRating();
	assert(Lptr->getMatchRating() >= 8.4 && Lptr->getMatchRating() <= 8.7);
	cout << "ALL OF TEST 3 TESTS PASSED" << endl;
}

void ratingTest2()
{
	Wrestler* w1 = new Wrestler("Vince McMahon", 25);
	Wrestler* w2 = new Wrestler("Triple H", 80);
	Cage* Cptr = new Cage(w1, w2);
	Cptr->setMatchRating();
	assert(Cptr->getMatchRating() >= 5.1 && Cptr->getMatchRating() <= 5.5);
	cout << "ALL OF TEST 4 TESTS PASSED" << endl;
}

int main() {
	wrestlerTest1();
	wrestlerTest2();
	ratingTest1();
	ratingTest2();

	/*PPV *ppvPtr = new PPV();
	ppvPtr->Begin();*/             //uncomment to run the actual program. Make sure you have "Wrestlers.txt" downloaded as well.

	



	return 0;
}