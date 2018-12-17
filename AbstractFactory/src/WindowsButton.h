/*
 * WindowsButton.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef WINDOWSBUTTON_H_
#define WINDOWSBUTTON_H_
#include "widget.h"
class WindowsButton: public widget {
public:
	WindowsButton();
	virtual ~WindowsButton();
	void draw() override;
};

#endif /* WINDOWSBUTTON_H_ */
