/*
 * CircleCookie.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef CIRCLECOOKIE_H_
#define CIRCLECOOKIE_H_
#include "AbstractCookie.h"
class CircleCookie: public AbstractCookie {
public:
	CircleCookie(): AbstractCookie("Circle Coookie", 20){}
	CircleCookie(std::string description, float price): AbstractCookie(description,price){}
	virtual ~CircleCookie(){}
};

#endif /* CIRCLECOOKIE_H_ */
