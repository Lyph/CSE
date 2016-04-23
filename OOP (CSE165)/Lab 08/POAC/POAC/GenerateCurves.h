#ifndef GC_H
#define GC_H

#include <vector>
#include <iostream>
#include <math.h>

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


struct XYData {

	virtual void generate(float xini, float xend, float inc) {};

	vector<Vec> a;

	XYData() {

	}

	void add(Vec* vec) {
		a.push_back(*vec);
	}

	Vec max() {
		Vec* vec;
		int maxY = 0;
		for (int i = 0; i < a.size(); i++) {
			if (a[i].y > maxY) 
			{ 
				vec = &a[i]; 
			}
		}

		return *vec;
	}

};

class QuadraticCurve :public XYData {
public:

	float a, b, c;

	QuadraticCurve(float aa, float bb, float cc) {
		a = aa;
		b = bb;
		c = cc;
	}

	void generate(float xStart, float xEnd, float inc) {
		for (float i = xStart; i <= xEnd; i += inc) {
			float y = a*(pow(i, 2)) + b*i + c;
			Vec* temp = new Vec(i, y);
			add(temp);
		}
	}
};

class CubicCurve :public XYData {
public:

	float a, b, c, d;

	CubicCurve(float aa, float bb, float cc, float dd) {
		a = aa;
		b = bb;
		c = cc;
		d = dd;
	}

	void generate(float xStart, float xEnd, float inc) {
		for (float i = xStart; i <= xEnd; i += inc) {
			float y = a*(pow(i, 3)) + b*(pow(i, 2)) + c*i + d;
			Vec* temp = new Vec(i, y);
			add(temp);
		}
	}
};

#endif 

