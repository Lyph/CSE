#ifndef CC_H
#define CC_H

using namespace std;
class Counter{
public:	

	static int count;
	int ID;

	Counter() : ID(count++) {
		cout << ID << " " << "created" << endl;
	}

	~Counter() {
		cout << ID << " " << "destroyed" << endl;
	}
	

};
#endif // !CC_H

