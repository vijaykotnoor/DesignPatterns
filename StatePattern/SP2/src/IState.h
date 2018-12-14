/*
 * IState.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef ISTATE_H_
#define ISTATE_H_
#include <iostream>
class IState {
public:
	IState(){}
	virtual ~IState(){}
	virtual void addGumballs(int count) = 0;
	virtual void insertCoin() = 0;
	virtual void turnHandle() = 0;
};

#endif /* ISTATE_H_ */
