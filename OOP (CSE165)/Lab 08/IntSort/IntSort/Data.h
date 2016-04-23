#ifndef DATA_h
#define DATA_h

#include<vector>
#include<iostream>

using namespace std;

struct Data{
	vector<int> a;
	void add(int num) 
	{
		a.push_back(num);
	}
	void print()
	{
		for (int i = 0; i < a.size(); i++) 
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	void sort()
	{
		bool notOrder = true;
		int temp = 0;
		int counter = 0;
		while (notOrder)
		{
			for (int i = 1; i < a.size(); i++)
			{
				if (a[i] < a[i - 1])
				{
					temp = a[i - 1];
					a[i - 1] = a[i];
					a[i] = temp;
				}
			}
			for (int i = 1; i < a.size(); i++)
			{
				if (a[i] < a[i - 1]) { break; }
				else 
				{
					if (i == a.size() - 1) { notOrder = false; }
				}
			}

		}
	}


};

#endif