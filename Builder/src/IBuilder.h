/*
 * IBuilder.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef IBUILDER_H_
#define IBUILDER_H_
#include "Array.h"
class IBuilder {
public:
	IBuilder(){}
	virtual ~IBuilder(){}
	virtual void addFront(char ) = 0;
	virtual void addBack(char ) = 0;
	virtual Array& getResult() = 0;

};

#endif /* IBUILDER_H_ */
