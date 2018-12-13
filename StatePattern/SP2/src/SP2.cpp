//============================================================================
// Name        : SP2.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "GumballMachine.h"
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
}
