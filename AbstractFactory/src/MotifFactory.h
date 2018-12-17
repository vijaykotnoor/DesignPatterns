/*
 * MotifFactory.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef MOTIFFACTORY_H_
#define MOTIFFACTORY_H_
#include "Factory.h"
#include "widget.h"
class MotifFactory: public Factory {
public:
	MotifFactory();
	virtual ~MotifFactory();
	widget* createButton() override;
	widget* createMenu() override;
};

#endif /* MOTIFFACTORY_H_ */
