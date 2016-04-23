#pragma once
#ifndef Circle_H
#define Circle_H
#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

struct Circle
{
private:
	double x, y, r;

public:
	double area;

	void setX(double a){x = a;}
	void setY(double b){y = b;}
	void setR(double c){r = c; area = r*r* M_PI;}

	double getX(){return x;}
	double getY() { return y; }
	double getR() { return r;  }


	Circle()
	{
		x = 0, y = 0, r = 1;
		area = r*r* M_PI;
	}

	Circle(double a, double b, double c)
	{
		setX(a);
		setY(b);
		setR(c);
	}
};


#endif