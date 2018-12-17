/*
 * MotifMenu.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef MOTIFMENU_H_
#define MOTIFMENU_H_
#include "widget.h"
class MotifMenu: public widget {
public:
	MotifMenu();
	virtual ~MotifMenu();
	void draw() override;
};

#endif /* MotifMenu_H_ */
