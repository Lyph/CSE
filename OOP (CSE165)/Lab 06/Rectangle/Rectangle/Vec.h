#pragma once
#ifndef VEC_H
#define VEC_H
#include <iostream>
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
			cout << "(" << x << ", " << y << ")"<<endl;
		}

	};

	Vec Vec::null = Vec();



#endif
