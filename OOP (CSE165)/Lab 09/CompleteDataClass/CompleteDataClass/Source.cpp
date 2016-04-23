#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
#include "SortableCircleData.h"
//#include "stdafx.h" //for Visual Studios 

using namespace std; 

int main()
{
	Data * myData = new Data();

	while (true)
	{
		char x;
		int y;
		cin >> x;

		switch (x)
		{
			case'A':
			{
				cin >> y;
				myData->add(new Circle(y));
				break;
			}
			case'R':
			{
				cin >> y;
				myData->remove(y);
				break;
			}
			case'S':
			{
				myData->sort();
				break;
			}
			case'P':
			{
				myData->print();
				break;
			}
			case'D':
			{
				myData->~Data();
				break;
			}
			case'Q':
			{
				exit(0);
				break;
			}
		}

	}

	return 0;
}