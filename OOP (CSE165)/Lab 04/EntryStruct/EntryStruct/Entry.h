#pragma once
#ifndef Entry_H
#define Entry_H
#include <string> 
using namespace std;
#include <iostream>

struct Entry
{
	string name;
	string lastname;
	string entry;


	void setName(string first)
		{
			name = first;
		}

	void setLastname(string last)
		{
			lastname = last;
		}

	void setEmail(string email)
		{
			entry = email;
		}
	void print()
	{
		cout << "First Name: " << name << endl;
		cout << "Last Name: " << lastname << endl;
		cout << "Email: " << entry << endl;
	}
};
#endif
