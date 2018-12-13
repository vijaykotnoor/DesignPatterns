/*
 * TeaRecipe.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef SRC_TEARECIPE_H_
#define SRC_TEARECIPE_H_
#include <iostream>
class TeaRecipe {
public:
	TeaRecipe(){}
	virtual ~TeaRecipe(){}
	void makeTea()
	{
		boilWater();
		addTeaPowder();
		pour();
		addIngredients();

	}
private:
	void boilWater()
	{
		std::cout<< "Boiling Water\n";
	}

	void addTeaPowder()
	{
		std::cout<< "Add Tea Powder\n";
	}

	void pour()
	{
		std::cout<< "Pour\n";
	}

	void addIngredients()
	{
		std::cout<< "Add Lemon\n";
	}

};

#endif /* SRC_TEARECIPE_H_ */
