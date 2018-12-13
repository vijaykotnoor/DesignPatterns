//============================================================================
// Name        : SolutionX2.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Recipe.h"
#include "CoffeeReciepe.h"
#include "TeaRecipe.h"
int main() {
	CoffeeReciepe c;
	c.makeCoffee();
	TeaRecipe t;
	t.makeTea();
	return 0;
}
