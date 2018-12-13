//============================================================================
// Name        : SolutionX4.cpp
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
	CoffeeReciepe c(true);
	c.makeRecipe();
	TeaRecipe t(false);
	t.makeRecipe();
	return 0;
}
