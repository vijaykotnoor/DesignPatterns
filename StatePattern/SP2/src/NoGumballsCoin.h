/*
 * NoGumballsCoin.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef NOGUMBALLSCOIN_H_
#define NOGUMBALLSCOIN_H_

#include <IState.h>
#include <GumballMachine.h>
class NoGumballsCoin: public IState {
public:
	NoGumballsCoin(GumballMachine* gbm):gbm_(gbm){}
	virtual ~NoGumballsCoin(){}
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

#endif /* NOGUMBALLSCOIN_H_ */
