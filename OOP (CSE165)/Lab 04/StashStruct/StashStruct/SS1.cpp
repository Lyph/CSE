
#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
#include "Stash.h"
//#include "stdafx.h" //for Visual Studios 

using namespace std; 

int main()
{
	Stash a;
	int length;
	double input;

	cin >> length;
	a.initialize(sizeof(double));
	for (int i = 0; i < length; i++)
	{
		cin >> input;
		a.add(new double(input));
	}
	
	for (int i = 0; i < length; i++)
	{
		cout << *(double *)(a.fetch(i)) << endl;
	}

	a.cleanup();

	return 0;
}

