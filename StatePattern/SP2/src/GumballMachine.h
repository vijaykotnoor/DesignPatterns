/*
 * GumballMachine.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */
#pragma once
#ifndef GUMBALLMACHINE_H_
#define GUMBALLMACHINE_H_
#include <iostream>

class IState;
class NoGumballsNoCoin;
class GumballsNoCoin;
class NoGumballsCoin;
class GumballsCoin;

class GumballMachine {
public:
	enum class GBMState
	{
		NO_GUMBALLS_NO_COIN,
		NO_GUMBALLS_COIN,
		GUMBALLS_COIN,
		GUMBALLS_NO_COIN
	};
	GumballMachine();
	GumballMachine(int count );


	IState* getState(GBMState state);

	void addGumballs(int count);

	void insertCoin();

	void turnHandle();


	void print();


	void addCount(int count);


	void setState(IState* state);

	void updateState();

	virtual ~GumballMachine(){}

private:
	int nGumballs_;
	float money_;

	NoGumballsNoCoin* ng_nc_;
	GumballsNoCoin* g_nc_;
	NoGumballsCoin* ng_c_;
	GumballsCoin* g_c_;
	IState* state_;
};

#endif /* GUMBALLMACHINE_H_ */
