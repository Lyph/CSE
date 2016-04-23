#pragma once
#ifndef RECT_H
#define RECT_H
#include "Vec.h"

#include <iostream>
//using namespace std;


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

#endif
