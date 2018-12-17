/*
 * WindowsFactory.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#include "WindowsFactory.h"
#include "WindowsButton.h"
#include "WindowsMenu.h"

WindowsFactory::WindowsFactory() {
	// TODO Auto-generated constructor stub

}

WindowsFactory::~WindowsFactory() {
	// TODO Auto-generated destructor stub
}

widget* WindowsFactory::createButton()
{
	return new WindowsButton;
}

widget* WindowsFactory::createMenu()
{
	return new WindowsMenu;
}

