#ifndef CC_H
#define CC_H
#include <stdio.h>   
#include <stdlib.h>  

using namespace std;
class Counter{
public:	

	static int count;
	int ID;

	Counter() : ID(count++) {
		//cout << ID << " " << "created" << endl;
	}

	~Counter() {
		//cout << ID << " " << "destroyed" << endl;
	}
	/*
	void* operator new(size_t size){
		cout << "new" << endl;
		return malloc(size);

		}

		void operator delete(void * ptr){
		free(ptr);
		cout << "delete" << endl;
		}
		*/
		void* operator new[](size_t size) {
		cout <<"new "<< size/sizeof(Counter)-1<< " counters starting at " << count<< endl;
		return malloc(size);
		}

			void operator delete[](void * ptr) {
			free(ptr);
			cout << "delete counters" << endl;
		}
		
};


#endif // !CC_H

