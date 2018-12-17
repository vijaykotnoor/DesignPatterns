/*
 * MyDocument.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef MYDOCUMENT_H_
#define MYDOCUMENT_H_
#include "Document.h"
#include <iostream>
class MyDocument: public Document {
public:
	MyDocument(std::string name):Document(name){}
	virtual ~MyDocument();
	void open() override { std::cout << "  MyDocument: Open()"<< std::endl;}
	void close() override { std::cout << "  MyDocument: Close()"<< std::endl;}
};

#endif /* MYDOCUMENT_H_ */
