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

struct A 
{
public:   
	A() 
	{ 
		cout << "A\n"; 
	} 
};       
class B : public A //calls A first then B
{ 
public:        
	B() 
	{
		cout << "B\n";
	}
};
void main() 
{
	if (true) { B b; }  
	A* a = new B;	//calls B which in turn calls A
	delete a;
	cout << "hi mom" ;

}
*/