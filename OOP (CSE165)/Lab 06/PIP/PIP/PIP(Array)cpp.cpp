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

struct RectStash {
	int size;
	int quantity;  // Number of storage spaces
	int next;      // Next empty space

				   // Dynamically allocated array of bytes:
	unsigned char* storage;

	// Functions!
	void initialize(int sz) {
		size = sz;
		quantity = 0;
		storage = 0;
		next = 0;
	}

	void cleanup() {
		if (storage != 0) {
			std::cout << "freeing storage" << std::endl;
			delete[]storage;
		}
	}

	int add(const void* element) {
		if (next >= quantity) // Enough space left?
			inflate(100);

		// Copy element into storage,
		// starting at next empty space:
		int startBytes = next * size;
		unsigned char* e = (unsigned char*)element;

		for (int i = 0; i < size; i++)
			storage[startBytes + i] = e[i];
		next++;

		return(next - 1); // Index number
	}

	void* fetch(int index) {
		// Check index boundaries:
		assert(0 <= index);

		if (index >= next)
			return 0; // To indicate the end

					  // Produce pointer to desired element:
		return &(storage[index * size]);
	}

	int count() {
		return next; // Number of elements in CStash
	}

	void inflate(int increase) {
		assert(increase > 0);

		int newQuantity = quantity + increase;
		int newBytes = newQuantity * size;
		int oldBytes = quantity * size;
		unsigned char* b = new unsigned char[newBytes];

		for (int i = 0; i < oldBytes; i++)
			b[i] = storage[i]; // Copy old to new

		delete[]storage; // Old storage
		storage = b; // Point to new memory
		quantity = newQuantity;
	}
};

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


int main()
{


	RectStash * a = new RectStash;
	a->initialize((int)sizeof(Rect));

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
		Rect * b = new Rect(Ux, Uy, x, y);
		a->add(b);
	}

	while (true) {
		cin >> x;
		cin >> y;
		if (x == -99 && y == -99) { break; }
		Vec b = Vec(x, y);
		for (int i = 0; i < a->count(); i++)
		{
			Rect *r = (Rect*)a->fetch(i);
			contain = r->contains(b);
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