//============================================================================
// Name        : SolutionX1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CoffeeReciepe.h"
#include "TeaRecipe.h"
using namespace std;

int main() {
	CoffeeReciepe c;
	c.makeCoffee();
	TeaRecipe t;
	t.makeTea();
	return 0;
}
