//============================================================================
// Name        : DecP1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "CircleCookie.h"
#include "SquareCookie.h"
#include "NutsDecorator.h"
#include "SprinklesDecorator.h"
int main() {
    CircleCookie ck1;
    std::cout<<ck1.getCookieDetails()<<std::endl;

    SquareCookie sq1;
    std::cout<<sq1.getCookieDetails()<<std::endl;

    ck1.addDecorator(new NutsDecorator);
    std::cout<<ck1.getCookieDetails()<<std::endl;

    sq1.addDecorator(new NutsDecorator);
    sq1.addDecorator(new SprinklesDecorator);
    std::cout<<sq1.getCookieDetails()<<std::endl;




	return 0;
}
