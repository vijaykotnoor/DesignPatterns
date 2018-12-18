/*
 * Weather.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef WEATHER_H_
#define WEATHER_H_

class Weather {
public:
	Weather():temp_(0), pressure_(0), humidity_(0){}
	Weather(float temp,
			float pressure,
			float humidity)
	:temp_(temp), pressure_(pressure), humidity_(humidity){}
	virtual ~Weather(){}

	float getHumidity() const {
		return humidity_;
	}

	void setHumidity(float humidity) {
		humidity_ = humidity;
	}

	float getPressure() const {
		return pressure_;
	}

	void setPressure(float pressure) {
		pressure_ = pressure;
	}

	float getTemp() const {
		return temp_;
	}

	void setTemp(float temp) {
		temp_ = temp;
	}

private:
	float temp_;
	float pressure_;
	float humidity_;
};

#endif /* WEATHER_H_ */
