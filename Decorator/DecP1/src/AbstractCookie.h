/*
 * AbstractCookie.h
 *
 *  Created on: Dec 19, 2018
 *      Author: vkotnoor
 */

#ifndef ABSTRACTCOOKIE_H_
#define ABSTRACTCOOKIE_H_
#include <list>
#include "ICookie.h"
#include "IDecorator.h"
class AbstractCookie: public ICookie{
public:
	AbstractCookie(): description_(), price_(),decorators_(){}
	AbstractCookie(std::string description, float price): description_(description), price_(price),decorators_(){}
	virtual const std::string getCookieDetails() const override
	{
         auto ret = "description=" + description_ + ", price=" + std::to_string(price_);
         for(auto elem : decorators_)
         {
        	 ret = ret + elem->getDecoratorDetails();
         }
         return ret;
	}

	virtual void addDecorator(IDecorator* decorator)override
	{
		decorators_.emplace_back(decorator);
		description_ = description_ + decorator->getDescription();
		price_ = price_ + decorator->getPrice();
	}

	virtual const std::string& getDescription() const override
	{
         return description_;
	}

	virtual void setDescription(const std::string& description)override
	{
		description_ = description;
	}

	virtual float getPrice() const override
	{
          return price_;
	}

	virtual void setPrice(float price)override
	{
         price_ = price;
	}
	virtual ~AbstractCookie(){}

private:
	std::string description_;
	float price_;
	std::list<IDecorator*> decorators_;
};

#endif /* ABSTRACTCOOKIE_H_ */
