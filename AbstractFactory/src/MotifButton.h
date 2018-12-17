/*
 * MotifButton.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef MOTIFBUTTON_H_
#define MOTIFBUTTON_H_
#include "widget.h"
class MotifButton: public widget {
public:
	MotifButton();
	virtual ~MotifButton();
	void draw() override;
};

#endif /* MOTIFBUTTON_H_ */
