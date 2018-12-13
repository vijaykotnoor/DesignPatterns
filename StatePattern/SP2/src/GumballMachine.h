/*
 * GumballMachine.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef GUMBALLMACHINE_H_
#define GUMBALLMACHINE_H_
#include <iostream>
#include <IState.h>
#include <NoGumballsNoCoin.h>
#include <GumballsNoCoin.h>
#include <NoGumballsCoin.h>
#include <GumballsCoin.h>
class GumballMachine {
public:
	enum class GBMState
	{
		NO_GUMBALLS_NO_COIN,
		NO_GUMBALLS_COIN,
		GUMBALLS_COIN,
		GUMBALLS_NO_COIN
	};
	GumballMachine():nGumballs_(0), money_(0), state_(ng_nc_), ng_nc_(new NoGumballsNoCoin(this)),
			 g_nc_(new GumballsNoCoin(this)),
					 g_c_(new GumballsCoin(this)),
							 ng_c_(new NoGumballsCoin(this)){}
	GumballMachine(int count ):nGumballs_(count), money_(0), state_(ng_nc_), ng_nc_(new NoGumballsNoCoin(this)),
			 g_nc_(new GumballsNoCoin(this)),
					 g_c_(new GumballsCoin(this)),
							 ng_c_(new NoGumballsCoin(this)){}


	IState* getState(GBMState state)
	{
		switch(state)
		{
		case GBMState::NO_GUMBALLS_NO_COIN:
			return ng_nc_;
		case GBMState::GUMBALLS_NO_COIN:
			return g_nc_;
		case GBMState::GUMBALLS_COIN:
			return g_c_;
		case GBMState::NO_GUMBALLS_COIN:
			return ng_c_;
		}
	}


	void addGumballs(int count)
	{
         state_->addGumballs(count);
	}
	void insertCoin()
	{
        state_->insertCoin();
	}
	void turnHandle()
	{
        state_->turnHandle();
	}

	void print()
	{
		std::cout<< "Gumball Machine [nGumballs = " << nGumballs_ << ", money = " << money_ << " state =" << int(state_) << "\n";
	}

	void addCount(int count)
	{
		nGumballs_ += count;
	}

	void setState(IState* state)
	{
		state_ = state;
	}

	void updateState()
	{
		nGumballs_--;
		money_++;
	}

	virtual ~GumballMachine(){}

private:
	int nGumballs_;
	float money_;
	IState* state_;
	NoGumballsNoCoin* ng_nc_;
	GumballsNoCoin* g_nc_;
	NoGumballsCoin* ng_c_;
	GumballsCoin* g_c_;
};

#endif /* GUMBALLMACHINE_H_ */
