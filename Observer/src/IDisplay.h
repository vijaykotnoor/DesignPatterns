/*
 * IDisplay.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef IDISPLAY_H_
#define IDISPLAY_H_
#include "Weather.h"
class IDisplay {
public:
	IDisplay(){}
	virtual ~IDisplay(){}
	virtual void update(Weather*) = 0;
};

#endif /* IDISPLAY_H_ */
