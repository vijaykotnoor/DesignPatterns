/*
 * BuilderOne.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef BUILDERONE_H_
#define BUILDERONE_H_
#include "IBuilder.h"
class BuilderOne: public IBuilder {
public:
	BuilderOne(){}
	virtual ~BuilderOne(){}
	void addFront(char ch) override
	{
		one_.lst.push_back(ch);
	}

	void addBack(char ch) override
	{
		one_.lst.push_back(ch);
	}

	Array& getResult()
	{
		return one_;
	}
private:
	OneEnded one_;
};

#endif /* BUILDERONE_H_ */
