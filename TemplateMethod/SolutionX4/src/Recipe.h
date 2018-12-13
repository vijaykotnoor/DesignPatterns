/*
 * Recipe.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef RECIPE_H_
#define RECIPE_H_
#include <iostream>
class Recipe {
public:
	Recipe(bool needIngredients):needIngredients_(needIngredients){}
	virtual ~Recipe(){}
	void makeRecipe()
	{
		boilWater();
		addPowder();
		pour();
		if(needIngredients_)
		addIngredients();

	}
protected:
	void boilWater()
	{
		std::cout<< "Boiling Water\n";
	}

	void pour()
	{
		std::cout<< "Pour\n";
	}

	virtual void addPowder() = 0;

	virtual void addIngredients() = 0;

	bool needIngredients_;
};

#endif /* RECIPE_H_ */
