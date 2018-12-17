/*
 * WindowsMenu.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef WINDOWSMENU_H_
#define WINDOWSMENU_H_
#include "widget.h"
class WindowsMenu: public widget {
public:
	WindowsMenu();
	virtual ~WindowsMenu();
	void draw() override;
};

#endif /* WindowsMenu_H_ */
