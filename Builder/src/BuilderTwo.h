/*
 * BuilderTwo.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef BUILDERTWO_H_
#define BUILDERTWO_H_
#include "IBuilder.h"
class BuilderTwo: public IBuilder {
public:
	BuilderTwo(){}
	virtual ~BuilderTwo(){}
	void addFront(char ch) override
	{
		two_.lst.push_front(ch);
	}

	void addBack(char ch) override
	{
		two_.lst.push_back(ch);
	}

	Array& getResult()
	{
		return two_;
	}
private:
	TwoEnded two_;
};

#endif /* BUILDERTWO_H_ */
