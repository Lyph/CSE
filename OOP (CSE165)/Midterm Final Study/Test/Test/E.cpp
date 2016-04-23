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
	~A() 
	{
		cout << "~A\n"; 
	}
};       
class B : public A 
{ 
public:        
	B() 
	{
		cout << "B\n";
	}     
	~B() 
	{
		cout << "~B\n";
	}
};
void main() 
{
	if (true) { B b; }
	A* a = new B;
	delete a; 
	cout << "hi";
}

//A B ~B ~A (deletes because out of if statement) A B ~A (just deletes a because B() was never called)

*/