#ifndef doge_h
#define doge_h

#include "Animal.h"
#include <iostream>
#include <string>
#include <vector>
#pragma once

struct Dog : public Animal
{
	Dog(string name, int age)
	{
		//Animal * temp = new Animal;
		cout << "Creating Dog" << endl;
		setName(name);
		setAge(age);
	}

	void feed()
	{
		cout << "A bone, please!" << endl;
	}
	~Dog() {
		cout << "Deleting Dog" << endl;
	}
};

#endif
