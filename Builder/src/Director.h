/*
 * Director.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef DIRECTOR_H_
#define DIRECTOR_H_
#include "IBuilder.h"
static std::string in[] = {"fa", "bb", "fc","bd", "fe", "bf", "fg", "bh" };
class Director {
public:
	Director(IBuilder* bldr): bldr_(bldr){}
	virtual ~Director(){}
	void setBuilder(IBuilder* bldr)
	{
		bldr_ = bldr;
	}
	void construct()
	{
		 for(auto i = 0; i < 8; i++)
		 {
			 if(in[i][0] == 'f')
				 bldr_->addFront(in[i][1]);
			 else
				 bldr_->addBack(in[i][1]);
		 }

	}

private:
	IBuilder* bldr_;
};

#endif /* DIRECTOR_H_ */
