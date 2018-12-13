/*
 * TeaRecipe.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef SRC_TEARECIPE_H_
#define SRC_TEARECIPE_H_
#include <iostream>
#include "Recipe.h"
class TeaRecipe: public Recipe {
public:
	TeaRecipe(){}
	virtual ~TeaRecipe(){}

private:

	void addPowder()
	{
		std::cout<< "Add Tea Powder\n";
	}

	void addIngredients()
	{
		std::cout<< "Add Lemon\n";
	}

};

#endif /* SRC_TEARECIPE_H_ */
