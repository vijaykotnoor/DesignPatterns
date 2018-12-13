/*
 * CoffeeReciepe.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef TEMPLATEMETHOD_SOLUTIONX1_SRC_COFFEERECIEPE_H_
#define TEMPLATEMETHOD_SOLUTIONX1_SRC_COFFEERECIEPE_H_
#include <iostream>
#include "Recipe.h"
class CoffeeReciepe:public Recipe {
public:
	CoffeeReciepe(){}
	virtual ~CoffeeReciepe(){}
	void makeCoffee()
	{
		boilWater();
		addCoffeePowder();
		pour();
		addIngredients();

	}
private:

	void addCoffeePowder()
	{
		std::cout<< "Add Coffee Powder\n";
	}

	void addIngredients()
	{
		std::cout<< "Add milk and sugar\n";
	}


};

#endif /* TEMPLATEMETHOD_SOLUTIONX1_SRC_COFFEERECIEPE_H_ */
