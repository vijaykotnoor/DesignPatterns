/*
 * GumballMachine.h
 *
 *  Created on: Dec 13, 2018
 *      Author: vkotnoor
 */

#ifndef GUMBALLMACHINE_H_
#define GUMBALLMACHINE_H_
#include <iostream>
class GumballMachine {
public:
	enum class InternalState
	{
		NO_GUMBALLS_NO_COIN,
		NO_GUMBALLS_COIN,
		GUMBALLS_COIN,
		GUMBALLS_NO_COIN
	};
	GumballMachine():nGumballs_(0), money_(0), state_(InternalState::NO_GUMBALLS_NO_COIN){}
	GumballMachine(int count ):nGumballs_(count), money_(0), state_(InternalState::GUMBALLS_NO_COIN){}
	void addGumballs(int count)
	{
		nGumballs_ += count;
		std::cout<< "Added Gumballs\n";
		if(state_ == InternalState::NO_GUMBALLS_NO_COIN)
			state_ = InternalState::GUMBALLS_NO_COIN;
		else if(state_ == InternalState::NO_GUMBALLS_COIN)
			state_ = InternalState::GUMBALLS_COIN;
	}
	void insertCoin()
	{
		if(state_ == InternalState::NO_GUMBALLS_NO_COIN)
		{
			state_ = InternalState::NO_GUMBALLS_COIN;
			std::cout<< "coin Inserted\n";
		}
		else if(state_ == InternalState::GUMBALLS_NO_COIN)
		{
			state_ = InternalState::GUMBALLS_COIN;
			std::cout<< "coin Inserted\n";
		}
		else
		{
			std::cout<< "coin Already inserted";
		}
	}
	void turnHandle()
	{
		if(state_ == InternalState::GUMBALLS_COIN)
		{
			nGumballs_--;
			money_++;
			if(nGumballs_ == 0)
			{
				state_ = InternalState::NO_GUMBALLS_NO_COIN;
			}
			else
			{
				state_ = InternalState::GUMBALLS_NO_COIN;
			}
			std::cout << "Take the gumball\n";
		}
		else if(state_ == InternalState::NO_GUMBALLS_COIN)
		{
			std::cout << "No Gumballs, take out the coin\n";
		}
		else
		{
			std::cout<<"Insert coin\n";
		}
	}

	void print()
	{
		std::cout<< "Gumball Machine [nGumballs = " << nGumballs_ << ", money = " << money_ << " state =" << int(state_) << "\n";
	}

	virtual ~GumballMachine(){}

private:
	int nGumballs_;
	float money_;
	InternalState state_;
};

#endif /* GUMBALLMACHINE_H_ */
