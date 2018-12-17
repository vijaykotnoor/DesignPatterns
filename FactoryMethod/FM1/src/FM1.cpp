//============================================================================
// Name        : FM1.cpp
// Author      : Vijay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "MyApplication.h"
#include "MyDocument.h"
int main() {
	MyApplication myApp;
    myApp.newDocument("foo");
    myApp.newDocument("bar");
    myApp.reportDocs();
	return 0;
}
