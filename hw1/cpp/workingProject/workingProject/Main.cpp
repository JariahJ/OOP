#include <iostream>
#include "Building.h"
#include "House.h"
#include "School.h"
#include <assert.h>

int main()
{
	School *a = new School(Color::BLACK, 100);
	assert(a->inhabitants() == 100);
	assert(a->getColor() == Color::BLACK);
	house *b = new house(Color::BROWN, 5);
	assert(b->inhabitants() == 5);
	assert(b->getColor() == Color::BROWN);
	house *c = new house();
	assert(c->getColor() == Color::BLACK);
	assert(c->inhabitants() == 0);
	School d = new School();
	assert(d->getColor() == Color::BLACK);
	assert(d->inhabitants() == 0);
	return 0;
}

