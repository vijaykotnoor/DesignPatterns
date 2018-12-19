/*
 * SprinklesDecorator.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef SPRINKLESDECORATOR_H_
#define SPRINKLESDECORATOR_H_
#include "IDecorator.h"
class SprinklesDecorator: public IDecorator {
public:
	SprinklesDecorator():weight_(2){}
	SprinklesDecorator(float weight):weight_(weight){}
	virtual ~SprinklesDecorator(){}

	const std::string getDescription() const override
	{
          return "with Sprinkles";
	}

	float getPrice() const override
	{
        return weight_*3;
	}

	const std::string getDecoratorDetails() const override
	{
         return " weight_ = " + std::to_string(weight_);
	}
private:
	float weight_;

};

#endif /* SPRINKLESDECORATOR_H_ */
