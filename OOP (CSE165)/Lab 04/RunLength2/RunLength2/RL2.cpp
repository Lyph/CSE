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

struct Stash {
	int size;      // Size of each space
	int quantity;  // Number of storage spaces
	int next;      // Next empty space
	int increment;
	int alloc;

	// Dynamically allocated array of bytes:
	unsigned char* storage;

	// Functions!
	void initialize(int sz) {
		size = sz;
		quantity = 0;
		storage = 0;
		next = 0;
		increment = 0;
		alloc = 0;
	}

	void cleanup() {
		if (storage != 0) {
			std::cout << "freeing storage" << std::endl;
			delete[]storage;
		}
	}

	int add(const void* element) {
		if (next >= quantity) { // Enough space left?
			inflate(increment);
			alloc++;
		}
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

int main() {

	char c = ' ';
	int num = 1;

	Stash A;
	A.initialize(sizeof(char));
	cin>>A.increment;
	int i = A.increment;

	while (c != '&' && num != 99) {
		cin >> c;
		char* cpointer = &c;
		cin >> num;

		if (c == '&' && num == 99) { break; }
		if (num > 0) {
			for (int i = 0; i < num; i++) { 
				A.add(cpointer);
			}
		}
		else{
			for (int i = 0; i < (0 - num); i++) { 
				A.add(cpointer);
			}
			A.add("\n");
		}
	}

	//End prints
	for (int i = 0; i < A.count(); i++) {cout << *(char*)A.fetch(i);}

	cout << "\n" << A.alloc << "\n" << (i*A.alloc);

	return 0;
}