//============================================================================
// Name        : SP1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GumballMachine.h"
using namespace std;

int main() {
	GumballMachine g;
	g.turnHandle();
	g.print();
	g.addGumballs(10);
	g.print();
	g.turnHandle();
	g.print();
	g.insertCoin();
	g.print();
	g.turnHandle();
	g.print();
	return 0;
}
