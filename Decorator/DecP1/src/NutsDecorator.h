/*
 * NutsDecorator.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef NUTSDECORATOR_H_
#define NUTSDECORATOR_H_
#include "IDecorator.h"
class NutsDecorator: public IDecorator {
public:
	NutsDecorator():qty_(5){}

	NutsDecorator(float qty):qty_(qty){}

	virtual ~NutsDecorator(){}

	const std::string getDescription() const override
	{
          return "with Nuts";
	}

	float getPrice() const override
	{
        return qty_*2;
	}

	const std::string getDecoratorDetails() const override
	{
         return " qty = " + std::to_string(qty_);
	}

private:

	float qty_;

};

#endif /* NUTSDECORATOR_H_ */
