#ifndef  OBJ_H
#define OBJ_H

#include "Shared.h"
#include <string.h>
using namespace std;

class Obj : public Shared {
public:
	string n;

	Obj(string name) {
		n = name;
		cout << "New " << n << std::endl;
	}

	~Obj() {
		cout << "Delete " << n << std::endl;
	}
};

#endif // ! OBJ_H
