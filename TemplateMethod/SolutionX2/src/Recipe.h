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
	Recipe(){}
	virtual ~Recipe(){}
protected:
	void boilWater()
	{
		std::cout<< "Boiling Water\n";
	}

	void pour()
	{
		std::cout<< "Pour\n";
	}
};

#endif /* RECIPE_H_ */
