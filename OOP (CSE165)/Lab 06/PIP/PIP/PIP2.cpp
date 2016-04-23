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

class RectStash {

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

	struct Stash
	{
		Rect A;
		Stash * next;

		void initialize(Rect a, Stash * nxt) {
			A = a;
			next = nxt;
		}
		

	}*head;

	Stash *head;

	RectStash() {
		head = NULL;
	}

	RectStash(Rect A, Stash * next) 
	{
		head = new Stash();
		head->initialize(A, next);
	}

};
/*class RectStash{
Rect test;
RectStash * Next;

void initialize(Rect A, RectStash * next) {
test = A;
Next = next;
}
RectStash()
{
head = 0;
}
}*head; 
int main()
{

	vector<Rect> a;

	float Ux = 0;
	float Uy = 0;
	float x = 0;
	float y = 0;

	bool checker = true;
	bool contain = false;

	while (checker = true) {

		cin >> Ux;
		cin >> Uy;
		cin >> x;
		cin >> y;

		if (Ux < 0 && Uy < 0 && y < 0 && x < 0) { break; }
		a.push_back(Rect(Ux, Uy, x, y));
	}

	while (checker = true) {
		cin >> x;
		cin >> y;
		if (x == -99 && y == -99) { break; }
		Vec b = Vec(x, y);
		for (int i = 0; i < a.size(); i++)
		{
			contain = a[i].contains(b);
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
*/