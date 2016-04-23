#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
#include "Stack.h"
//#include "stdafx.h" //for Visual Studios 

using namespace std;

int main()
{
	Stack a;
	int length;
	double input;

	cin >> length;
	a.initialize();
	for (int i = 0; i < length; i++)
	{
		cin >> input;
		a.push(new double(input));
	}

	Stack::Link * temp = a.head;

	while (temp != NULL)
	{
		cout << *(double*)temp->data<<endl;
		temp = temp->next;
	}


	for (int i = 0; i <length; i++)
	{
		a.pop();
		//cout << *(double*)(a.peek())<<endl;
	}

	a.cleanup();

	return 0;
}