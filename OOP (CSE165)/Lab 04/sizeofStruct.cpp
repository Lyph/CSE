#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
//#include "stdafx.h" //for Visual Studios 

using namespace std; 

struct test{
	char a;
	char c;
	int b;
};

int main()
{
	int calc = sizeof(test);
	cout<<calc;
	return 0;
}

