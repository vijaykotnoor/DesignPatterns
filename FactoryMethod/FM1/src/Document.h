/*
 * Document.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef DOCUMENT_H_
#define DOCUMENT_H_
#include <string>
class Document {
public:
	Document(std::string name):name_(name){}
	virtual ~Document();
	virtual void open() = 0;
	virtual void close() = 0;
	std::string getName(){return name_;}
private:
	std::string name_;

};

#endif /* DOCUMENT_H_ */
