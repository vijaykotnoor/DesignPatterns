/*
 * StatisticsDisplay.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef STATISTICSDISPLAY_H_
#define STATISTICSDISPLAY_H_
#include "IDisplay.h"
#include <limits>
class StatisticsDisplay: public IDisplay {
public:
	StatisticsDisplay():maxTemp_(std::numeric_limits<float>::min()),
	minTemp_(std::numeric_limits<float>::max()),
	maxPressure_(std::numeric_limits<float>::min()),
	minPressure_(std::numeric_limits<float>::max()),
	maxHumidity_(std::numeric_limits<float>::min()),
	minHumidity_(std::numeric_limits<float>::max()){}

	virtual ~StatisticsDisplay(){}

	void update(Weather* weather) override
	{
		minTemp_ = std::min(minTemp_, weather->getTemp());
		maxTemp_ = std::max(maxTemp_, weather->getTemp());
		minPressure_ = std::min(minPressure_, weather->getTemp());
		maxPressure_ = std::max(maxPressure_, weather->getTemp());
		minHumidity_ = std::min(minHumidity_, weather->getTemp());
		maxHumidity_ = std::max(maxHumidity_, weather->getTemp());
		std::cout<< "**************StatisticsDisplay*****************\n";
		std::cout<< "Min Temp: " << minTemp_<< "\n";
		std::cout<< "Man Temp: " << maxTemp_<< "\n";

	}

private:
	float maxTemp_;
	float minTemp_;
	float maxPressure_;
	float minPressure_;
	float maxHumidity_;
	float minHumidity_;
};

#endif /* STATISTICSDISPLAY_H_ */
