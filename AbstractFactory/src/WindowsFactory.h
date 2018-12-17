/*
 * WindowsFactory.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef WINDOWSFACTORY_H_
#define WINDOWSFACTORY_H_
#include "Factory.h"
#include "widget.h"
class WindowsFactory: public Factory {
public:
	WindowsFactory();
	virtual ~WindowsFactory();
	widget* createButton() override;
	widget* createMenu() override;
};

#endif /* WINDOWSFACTORY_H_ */
