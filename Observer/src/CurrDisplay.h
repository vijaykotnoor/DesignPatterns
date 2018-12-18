/*
 * CurrDisplay.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef CURRDISPLAY_H_
#define CURRDISPLAY_H_
#include <iostream>
#include "IDisplay.h"
class CurrDisplay: public IDisplay {
public:
	CurrDisplay(){}
	virtual ~CurrDisplay(){}
	void update(Weather* weather)override
	{
		weather_ = weather;
		std::cout<< "**************CurrDisplay*****************\n";
		std::cout<< "Temperature: " << weather_->getTemp() << "\n";
		std::cout<< "Pressure: " << weather_->getPressure()<< "\n";
		std::cout<< "Humidity: " << weather_->getHumidity()<< "\n";
	}
private:
	Weather* weather_;
};

#endif /* CURRDISPLAY_H_ */
