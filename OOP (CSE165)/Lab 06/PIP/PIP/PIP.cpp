#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset> 
#include <vector> 
#include <math.h> 
#include <algorithm> 
#include <cassert>

//#include "stdafx.h" //for Visual Studios 

using namespace std; 

struct Vec
{
	static Vec null;
	float x;
	float y;

	Vec()
	{
		x = 0;
		y = 0;
	}


	Vec(float w, float h)
	{
		x = w;
		y = h;

	}
	void add(Vec u)
	{
		x += u.x;
		y += u.y;
	}
	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

};

Vec Vec::null = Vec();

class Rect
{
public:
	float Ux = 0;
	float Uy = 0;
	float x = 0;
	float y = 0;


	Rect(float a, float b, float c, float d) {
		Ux = a;
		Uy = b;
		x = c;
		y = d;
	}

	bool contains(Vec z) {
		if (z.x > Ux && z.x < Ux + x && z.y>Uy - y && z.y < Uy)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

};

struct RectStash {
	vector<Rect> Stash;


	void add(Rect b) {
		Stash.push_back(b);
	}

	int size() {
		return Stash.size();
	}

};


int main()
{


	RectStash * a = new RectStash;

	float Ux = 0;
	float Uy = 0;
	float x = 0;
	float y = 0;

	bool contain = false;

	while (true) {

		cin >> Ux;
		cin >> Uy;
		cin >> x;
		cin >> y;

		if (Ux < 0 && Uy < 0 && y < 0 && x < 0) { break; }
		Rect  b = Rect(Ux, Uy, x, y);
		a->add(b);
	}


	while (true) {
		cin >> x;
		cin >> y;
		if (x == -99 && y == -99) { break; }
		Vec c = Vec(x, y);
		for (int i = 0; i < a->size(); i++)
		{
			contain = (a->Stash[i]).contains(c);
			if (contain == true) 
			{
				cout << "in ";
			}
			else {
				cout << "out ";
			}
			
		}
	}

	return 0;
}