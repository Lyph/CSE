#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
#include "SomeHeader.h"
//#include "stdafx.h" //for Visual Studios 

using namespace std; 

int main()
{
	vector<A*> myVec;
	initVec(myVec);

	for (int i = 0; i < myVec.size(); i++)
	{
		//const type_info& temp = typeid(k[i]);
		cout << typeid(*myVec[i]).name() << endl;
	}
	return 0;
}