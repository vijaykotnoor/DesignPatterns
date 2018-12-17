/*
 * MyApplication.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef MYAPPLICATION_H_
#define MYAPPLICATION_H_
#include "Application.h"
#include "MyDocument.h"
class MyApplication: public Application {
public:
	MyApplication(){std::cout << "MyApplication: ctor\n";}
	virtual ~MyApplication();

	Document* createDocument( std:: string name) override {
			std::cout << "   MyApplication: CreateDocument()\n";
			return new MyDocument( name ); }
};

#endif /* MYAPPLICATION_H_ */
