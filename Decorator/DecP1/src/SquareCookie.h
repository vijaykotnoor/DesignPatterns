/*
 * SquareCookie.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef SQUARECOOKIE_H_
#define SQUARECOOKIE_H_
#include "AbstractCookie.h"
class SquareCookie: public AbstractCookie {
public:
	SquareCookie(): AbstractCookie("Square Coookie", 15){}
	SquareCookie(std::string description, float price): AbstractCookie(description,price){}
	virtual ~SquareCookie(){}
};

#endif /* SQUARECOOKIE_H_ */
