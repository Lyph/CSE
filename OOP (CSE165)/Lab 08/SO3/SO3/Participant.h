#ifndef PAR_h
#define PAR_h

#include<vector>
#include<iostream>
#include "Sortable.h"

using namespace std;

class Participant :public Sortable {
public:
	string name;
	int age;
	double score;

	Participant(string n, int a, double s) {
		name = n;
		age = a;
		score = s;

	}

	bool compare(const Sortable * s) {
		if (this->score > ((Participant*)s)->score) { return true; }
		else if (this->score == ((Participant*)s)->score)
		{
			if (this->age < ((Participant*)s)->age) { return true; }
			else if (this->age == ((Participant*)s)->age)
			{
				if (this->name.compare(((Participant*)s)->name) < 0) {return true;}
				else { return false; }

				

			}
			else { return false; }
		}
		else { return false; }
	}

	void print() {
		cout << this->name<<"\t"<<this->age<< "\t"<<this->score << endl;// we use . when we have defreferenced object. "this" is always a pointer
	}

	/*void add(Circle* i) {
	Data::add(i);
	}*/

};



#endif