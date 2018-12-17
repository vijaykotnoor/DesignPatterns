/*
 * widget.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef WIDGET_H_
#define WIDGET_H_

class widget {
public:
	widget();
	virtual ~widget();
	virtual void draw() = 0;
};

#endif /* WIDGET_H_ */
