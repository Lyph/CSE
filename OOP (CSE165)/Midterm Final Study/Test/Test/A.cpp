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

int x, y,b;
int *px, *py;

	int f()
	{ 
		int s = *px + *py;
		cout << s << endl; 
		return s; 
	}
	int main() 
	{ 
		x = y = 2;
		px = &x; py = &y;
		x = y = f();
		b = f(); // this will call f() again but s is resetted
		cout << b << endl;
		cout << f() << endl;

		return 0; 
		//this couts 4 8 8 
	}
	*/