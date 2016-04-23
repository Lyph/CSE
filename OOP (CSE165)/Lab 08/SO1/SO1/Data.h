#ifndef DATA_h
#define DATA_h

#include<vector>
#include<iostream>
#include "Sortable.h"

using namespace std;

struct Data {
	vector<Sortable*> a;
	void add(Sortable* item)
	{
		a.push_back(item);
	}
	void print()
	{
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