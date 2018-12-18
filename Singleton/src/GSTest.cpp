//============================================================================
// Name        : GenericSingleton.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GenericSingleton.h"
using namespace std;
class add
{
public:
	add(){}
	~add(){}
	int execute()
	{
		return a_ + b_;
	}
	void setA(int A){a_ = A;}
	void setB(int B){b_ = B;}
private:
	int a_ , b_;
};
int main() {
    auto first = GenericSingleton<add>::getInstance();
    first->setA(5);
    first->setB(5);
    cout << first->execute()<< endl;

    auto second = GenericSingleton<add>::getInstance();
    cout << second->execute()<< endl;
    first->setA(15);
    cout << second->execute()<< endl;
    second->setB(55);
    cout << first->execute()<< endl;
    cout << second->execute()<< endl;

	return 0;
}

