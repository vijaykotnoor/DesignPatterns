/*
 * Array
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include <deque>
#include <vector>
#include <iostream>
class BuilderOne;
class BuilderTwo;
using namespace std;
class Array { public:
   virtual void traverse() = 0;
};

class OneEnded : public Array {
public:
   friend class BuilderOne;
   void traverse() {
      for (i=0; i < lst.size(); i++)
         cout << lst[i] << ' ';
      cout << endl; }
private:
   vector<char> lst;   int i;
};

class TwoEnded : public Array {
public:
   friend class BuilderTwo;
   void traverse() {
      for (i=0; i < lst.size(); i++)
         cout << lst[i] << ' ';
      cout << endl; }
private:
   deque<char> lst;   int i;
};



#endif /* ARRAY_H_ */
