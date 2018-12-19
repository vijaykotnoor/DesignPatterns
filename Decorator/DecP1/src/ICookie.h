/*
 * ICookie.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef ICOOKIE_H_
#define ICOOKIE_H_
#include <string>
class IDecorator;
class ICookie {
public:
	ICookie(){}
	virtual ~ICookie(){}

	virtual const std::string getCookieDetails() const = 0;

	virtual void addDecorator(IDecorator* decorator) = 0;

	virtual const std::string& getDescription() const = 0;

	virtual void setDescription(const std::string& description) = 0;

	virtual float getPrice() const = 0;

	virtual void setPrice(float price) = 0;

private:

};

#endif /* ICOOKIE_H_ */
