#ifndef DEFAULT_H
#define DEFAULT_H

using namespace std;
class Object {
public:
	static int count;

	Object() {
		count++;
	}

	Object(const Object &i) {
		count++;
	}

};

#endif