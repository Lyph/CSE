#ifndef T_H
#define T_H
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
};

#endif
