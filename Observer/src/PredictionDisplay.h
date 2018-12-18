/*
 * PredictionDisplay.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef PREDICTIONDISPLAY_H_
#define PREDICTIONDISPLAY_H_
#include "IDisplay.h"
class PredictionDisplay: public IDisplay {
public:
	PredictionDisplay(){}
	virtual ~PredictionDisplay(){}
	void update(Weather* weather)override
	{
		weather_ = weather;
		std::cout<< "**************PredictionDisplay*****************\n";
		std::cout<< "Temperature: " << weather_->getTemp() + 1<< "\n";
		std::cout<< "Pressure: " << weather_->getPressure()*1.1<< "\n";
		std::cout<< "Humidity: " << weather_->getHumidity()*1.2<< "\n";
	}
private:
	Weather* weather_;
};

#endif /* PREDICTIONDISPLAY_H_ */
