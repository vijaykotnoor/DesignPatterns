/*
 * NoGumballsNoCoin.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef NOGUMBALLSNOCOIN_H_
#define NOGUMBALLSNOCOIN_H_

#include <IState.h>
#include <GumballMachine.h>

class NoGumballsNoCoin: public IState {
public:
	NoGumballsNoCoin(GumballMachine* gbm):gbm_(gbm){}
	virtual ~NoGumballsNoCoin(){}

	void addGumballs(int count) override
	{
		std::cout << "Added gumballs\n";
		gbm_.addCount(count);
		gbm_.setState(gbm_.getState(GumballMachine::GBMState::GUMBALLS_NO_COIN));
	}

	void insertCoin() override
	{
		std::cout << "Coin Inserted\n";
		gbm_.setState(gbm_.getState(GumballMachine::GBMState::NO_GUMBALLS_COIN));
	}

	void turnHandle() override
	{
		std::cout << "Insert Coin\n";
	}
private:
	GumballMachine* gbm_;
};

#endif /* NOGUMBALLSNOCOIN_H_ */
