/*
 * IDecorator.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef IDECORATOR_H_
#define IDECORATOR_H_
#include <string>
class IDecorator {
public:
	IDecorator(){}
	virtual ~IDecorator(){}
	virtual const std::string getDescription() const = 0;

	virtual float getPrice() const = 0;

	virtual const std::string getDecoratorDetails() const = 0;
};

#endif /* IDECORATOR_H_ */
