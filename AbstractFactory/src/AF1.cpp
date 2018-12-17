//============================================================================
// Name        : AF1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "widget.h"
#include "MotifMenu.h"
#include "MotifButton.h"
#include "WindowsMenu.h"
#include "WindowsButton.h"
#include "Factory.h"
#include "WindowsFactory.h"
#include "MotifFactory.h"

using namespace std;
//#define MOTIF

int main() {
	Factory* factory;
#ifdef MOTIF
	factory = new MotifFactory;
#else
	factory = new WindowsFactory;
#endif

	auto button = factory->createButton();
	auto menu = factory->createMenu();
	button->draw();
	menu->draw();


	return 0;
}
