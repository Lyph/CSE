/*
#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>;
//#include "stdafx.h" //for Visual Studios 

using namespace std; 

int main()
{
	int input = 1, sum = 0;
	vector<int> num;

	do
	{
		cin >> input;
		if(input<0)
		{
			input *= -1;
			num.erase(remove(num.begin(), num.end(), input), num.end());
		}
		else 
		{
			num.push_back(input);
		}

	} while(input != 0);

	cout << num.size()-1<<" ";
	for (int i = 0; i < num.size()-1;i++) 
	{
		sum+=num[i];
	}
	cout << sum;
	return 0;
}
*/