#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
#include "Animal.h"
#include "Dog.h"
#include "display.h"
//#include "stdafx.h" //for Visual Studios 

using namespace std; 

int main()
{
	int x, age;
	char value = ' ';
	string name;
	cin >> x;
	vector<Animal*> Circus;
	for (int i = 0; i < x;i++)
	{
		cin >> value;
		cin >> name;
		cin >> age;
		if (value == 'A')
		{
			Animal* myAnimal = new Animal();
			myAnimal->setName(name);
			myAnimal->setAge(age);
			Circus.push_back(myAnimal);
		}
		if (value == 'D')
		{
			Dog * myDog = new Dog(name, age);
			Circus.push_back(myDog);
		}
	}
	display(Circus);

	return 0;
}