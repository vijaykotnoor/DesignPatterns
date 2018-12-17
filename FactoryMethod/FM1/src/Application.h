/*
 * Application.h
 *
 *  Created on: Dec 17, 2018
 *      Author: vkotnoor
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_
#include <vector>
#include <iostream>
#include "Document.h"
class Application {
public:
	Application():docs_()
{std::cout << "Application ctor\n";}
	void newDocument(std::string name)
	{
		std::cout << "Application: New Document()\n";
		docs_.push_back(createDocument(name));
		docs_.back()->open();
	}

	void reportDocs()
	{
		std::cout << "Application: Report Docs()\n";
		for(auto const elem : docs_)
		{
			std::cout<< " " << elem->getName() << "\n";
		}
	}


	virtual Document* createDocument(std::string name) = 0;

	virtual ~Application();
private:
	std::vector<Document*> docs_;
};

#endif /* APPLICATION_H_ */
