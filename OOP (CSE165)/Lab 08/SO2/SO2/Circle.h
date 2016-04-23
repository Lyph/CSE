#ifndef CIR_h
#define CIR_h

#include<vector>
#include<iostream>
#include "Sortable.h"

using namespace std;

class Circle :public Sortable {
public:
	int radius;

	Circle() {
		radius = 0;
	}
	
	Circle(int i) {
		radius = i;
	}

	bool compare(const Sortable * s) {
		if (this->radius < ((Circle*)s)->radius) { return true; }
		else { return false; }
	}

	void print(){
		cout << "Circle with radius: "<< this->radius<<endl;// we use . when we have defreferenced object. "this" is always a pointer
	}

	/*void add(Circle* i) {
		Data::add(i);
	}*/

};



#endif
