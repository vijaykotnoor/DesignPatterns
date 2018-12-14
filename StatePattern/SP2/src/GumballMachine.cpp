/*
 * GumballMachine.cpp
 *
 *  Created on: Dec 14, 2018
 *      Author: vkotnoor
 */

#include "GumballMachine.h"
#include "IState.h"
#include "NoGumballsNoCoin.h"
#include "GumballsNoCoin.h"
#include "NoGumballsCoin.h"
#include "GumballsCoin.h"
GumballMachine::GumballMachine():nGumballs_(0), money_(0), ng_nc_(new NoGumballsNoCoin(this)),
g_nc_(new GumballsNoCoin(this)),
ng_c_(new NoGumballsCoin(this)),
g_c_(new GumballsCoin(this)),
state_(ng_nc_){}
GumballMachine::GumballMachine(int count ):nGumballs_(count), money_(0), ng_nc_(new NoGumballsNoCoin(this)),
		g_nc_(new GumballsNoCoin(this)),
		ng_c_(new NoGumballsCoin(this)),
		g_c_(new GumballsCoin(this)),
		state_(ng_nc_)
{}


IState* GumballMachine::getState(GBMState state)
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

	return nullptr;
}


void GumballMachine::addGumballs(int count)
{
	state_->addGumballs(count);
}
void GumballMachine::insertCoin()
{
	state_->insertCoin();
}
void GumballMachine::turnHandle()
{
	state_->turnHandle();
}

void GumballMachine::print()
{
	std::cout<< "Gumball Machine [nGumballs = " << nGumballs_ << ", money = " << money_  << "]\n";
}

void GumballMachine::addCount(int count)
{
	nGumballs_ += count;
}

void GumballMachine::setState(IState* state)
{
	state_ = state;
}

void GumballMachine::updateState()
{
	nGumballs_--;
	money_++;
}



