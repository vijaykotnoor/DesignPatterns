/*
 * MotifFactory.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#include "MotifFactory.h"
#include "MotifButton.h"
#include "MotifMenu.h"

MotifFactory::MotifFactory() {
	// TODO Auto-generated constructor stub

}

MotifFactory::~MotifFactory() {
	// TODO Auto-generated destructor stub
}

widget* MotifFactory::createButton()
{
	return new MotifButton;
}

widget* MotifFactory::createMenu()
{
	return new MotifMenu;
}

