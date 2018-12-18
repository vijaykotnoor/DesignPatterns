//============================================================================
// Name        : BP1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "BuilderOne.h"
#include "BuilderTwo.h"
#include "Director.h"
int main() {
	BuilderOne one;
	BuilderTwo two;
	Director dir(&two);
	dir.construct();
	two.getResult().traverse();
	dir.setBuilder(&one);
	dir.construct();
	one.getResult().traverse();
	return 0;
}
