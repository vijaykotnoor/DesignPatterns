/*
 * GumballsNoCoin.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef GUMBALLSNOCOIN_H_
#define GUMBALLSNOCOIN_H_

#include "IState.h"
#include "GumballMachine.h"
class GumballsNoCoin: public IState {
public:
	GumballsNoCoin(GumballMachine* gbm):gbm_(gbm){}
	virtual ~GumballsNoCoin(){}

	void addGumballs(int count) override
	{
		std::cout << "Added gumballs\n";
		gbm_->addCount(count);
	}

	void insertCoin() override
	{
		std::cout << "Coin Inserted\n";
		gbm_->setState(gbm_->getState(GumballMachine::GBMState::GUMBALLS_COIN));
	}

	void turnHandle() override
	{
		std::cout << "Insert Coin\n";
	}
private:
	GumballMachine* gbm_;
};

#endif /* GUMBALLSNOCOIN_H_ */
