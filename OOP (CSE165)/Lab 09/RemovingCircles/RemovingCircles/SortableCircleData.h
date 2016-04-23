#ifndef SCD_h
#define SCD_h

#include<vector>
#include<iostream>

using namespace std;

class Sortable {

public:
	virtual bool compare(const Sortable * s) = 0;
	virtual void print() = 0;
};

//--------------------------------------------------------------------------------------------------------------------------------//
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

	void print() {
		cout << "Circle with radius: " << this->radius << endl;// we use . when we have defreferenced object. "this" is always a pointer
	}

};
//--------------------------------------------------------------------------------------------------------------------------------//
struct Data {
	vector<Sortable*> a;
	void add(Sortable* item)// Circle is a subclass which counts as a Sortable
	{
		a.push_back(item);
	}
	void remove(int rem) {a.erase(a.begin() + rem);}

	void print()
	{
		if (a.size() == 0)
		{
			cout << "Dataset Empty";
		}
		for (int i = 0; i < a.size(); i++)
		{
			a[i]->print();
		}
		cout << endl;
	}
	void sort()
	{
		bool notOrder = true;
		Sortable* temp;
		int counter = 0;
		while (notOrder)
		{
			for (int i = 1; i < a.size(); i++)
			{
				if (a[i]->compare(a[i - 1]))
				{
					temp = a[i - 1];
					a[i - 1] = a[i];
					a[i] = temp;
				}
			}
			for (int i = 1; i < a.size(); i++)
			{
				if (a[i]->compare(a[i - 1])) { break; }
				else
				{
					if (i == a.size() - 1) { notOrder = false; }
				}
			}

		}
	}


};




#endif