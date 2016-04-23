#ifndef T_H
#define T_H

#define _USE_MATH_DEFINES

#include <math.h>
class Time {
public:
	int sec;
	int min;
	int hr;

	Time() 
	{
		hr = 0;
		min = 0;
		sec = 0;
	}

	Time(int hours, int minutes, int seconds) {
		hr = hours;
		min = minutes;
		sec = seconds;
	}
	void add(Time temp) {
		sec += temp.sec;
		if (sec > 60) {
			min += 1;
			sec -= 60;
		}
		min += temp.min;
		if (min > 60) {
			hr += 1;
			min -= 60;
		}
		hr += temp.hr;
		if (hr > 24) {
			hr -= 24;
		}
	}

	int getHours() {
		return this->hr;
	}
	int getMinutes() {
		return this->min;
	}
	int getSeconds() {
		return this->sec;
	}

	void getAngles(float& a, float& b, float& c) {
		c = M_PI / 2 - M_PI / 30 * this->sec;
		//if (c <= 0) { c += 2 * M_PI; }
		b = M_PI / 2 - M_PI / 30 * this->min;
		//while (this->hr >= 12){this->hr += - 12;} // use while incase "24"
		//float offset = M_PI / 180 * (30 * this->min / 60);
		a = M_PI / 2 - M_PI / 6 * this->hr - M_PI / 180 * (30* this->min / 60); //30 degree =1/12 of a circle
		if (a <= -M_PI) { a = 2 * M_PI + a; }

	}

};

#endif
