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
int f(int a, int b) 
{ 
	static int s = *px + *py;   //	s = 4	11(from last time)
	x = a + s;					//	x = 6	22
	y = b + s;					//	y = 5	(2+11)13
	s = x + y;					//	s = 11	35
	cout << s << endl; 
	return s; // you can change s within this function 
} 
int main() { 
	x = y = 2;    
	px = &x; py = &y;			//  
	int a = 1, b = 2;			// x = 2, y = 2, a = 1, b = 2
	a = f(a, b);	// f(1,2) --> a = 11
	b = f(a, b);	// f(11,2)--> b = 35
	cout << *px << endl << *py << endl; //*px = 22, *py = 13
	
	return 0;
}
*/