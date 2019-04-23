#include <iostream>
#include "HomeSchool.h"
#include "assert.h"

using namespace building
int main() {
	HomeSchool a = new HomeSchool;
	assert(a.Color == COLOR::BLACK);


	return 0;
}
