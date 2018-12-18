//============================================================================
// Name        : OB1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "WeatherStation.h"
#include "Weather.h"
#include "StatisticsDisplay.h"
#include "CurrDisplay.h"
#include "PredictionDisplay.h"
int main() {
	WeatherStation ws;
	IDisplay* SD = new StatisticsDisplay;
	IDisplay* CD = new CurrDisplay;
	IDisplay* PD = new PredictionDisplay;
	ws.subscribe( CD);
	ws.subscribe( SD);
	ws.subscribe( PD);

	ws.notify(10, 20, 30);
	ws.notify(15, 22, 33);
	ws.unsubscribe(SD);
	ws.notify(2, 3, 6);

	return 0;
}
