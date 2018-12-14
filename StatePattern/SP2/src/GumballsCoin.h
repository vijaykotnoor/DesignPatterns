/*
 * GumballsCoin.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef GUMBALLSCOIN_H_
#define GUMBALLSCOIN_H_

#include "IState.h"
#include "GumballMachine.h"
class GumballsCoin: public IState {
public:
	GumballsCoin(GumballMachine* gbm):gbm_(gbm){}
	virtual ~GumballsCoin(){}

	void addGumballs(int count) override
	{
		std::cout << "Added gumballs\n";
		gbm_->addCount(count);
	}

	void insertCoin() override
	{
		std::cout << "Coin already Inserted\n";
	}

	void turnHandle() override
	{
		std::cout << "Take gumball\n";
		gbm_->updateState();
		gbm_->setState(gbm_->getState(GumballMachine::GBMState::GUMBALLS_NO_COIN));
	}
private:
	GumballMachine* gbm_;
};

#endif /* GUMBALLSCOIN_H_ */
