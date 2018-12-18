/*
 * WeatherStation.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef WEATHERSTATION_H_
#define WEATHERSTATION_H_
#include <list>
#include "IDisplay.h"
class WeatherStation {
public:
	WeatherStation():displayUnits_(){}
	virtual ~WeatherStation(){}
	void subscribe(IDisplay* display)
	{
		displayUnits_.push_back(display);
	}

	void unsubscribe(IDisplay* display)
		{
			displayUnits_.remove(display);
		}

	void notify(float temp, float pressure, float humidity)
		{
			Weather* weather = new Weather(temp, pressure, humidity);
			for(auto elem: displayUnits_)
			{
				elem->update(weather);
			}
		}

private:
	std::list<IDisplay*> displayUnits_;
};

#endif /* WEATHERSTATION_H_ */
