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

	static bool (*comp_cb) (const Participant *, const Participant *);

	Participant(string n, int a, double s) {
		name = n;
		age = a;
		score = s;

	}

	bool compare(const Sortable * s) {
		Participant* p1 = (Participant*)s;
		Participant* p2 = (Participant*)this;

		return comp_cb(p1, p2);
		
	
		/*if (this->score > ((Participant*)s)->score) { return true; }
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
		else { return false; } */
	} 

	void print() {
		cout << this->name<<"\t"<<this->age<< "\t"<<this->score << endl;// we use . when we have defreferenced object. "this" is always a pointer
	}

	/*void add(Circle* i) {
	Data::add(i);
	}*/

};



#endif