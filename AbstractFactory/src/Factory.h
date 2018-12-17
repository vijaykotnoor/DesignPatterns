/*
 * Factory.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef FACTORY_H_
#define FACTORY_H_
#include "widget.h"
class Factory {
public:
	Factory();
	virtual ~Factory();
	virtual widget* createButton()= 0;
	virtual widget* createMenu()= 0;
};

#endif /* FACTORY_H_ */
