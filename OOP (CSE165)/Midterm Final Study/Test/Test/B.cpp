/*
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

int x, y;
int *px, *py;
int f() 
{
	static int s = *px + *py;
	cout << s << endl;
	return s; 
} 
int main() 
{
	x = y = 2;    
	px = &x; py = &y;    
	x = y = f();
	cout << f() << endl; //static already set s to 4, so universally s is 4

	return 0;
}// cout 4 4 4
*/