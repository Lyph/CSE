#ifndef LA7_A_h
#define LA7_A_h

#include <iostream>

using namespace std;

class A {
    int i;
    int f;
public:
    A(){
        cout << "Creating object" << endl;
       // doSomething(); don't do this because B() hasn't start constructed yet. You can't have virtual contructor
    }
    
    void start(){
		doSomething(); //place here because B() is already constructed 
        i = 1;
        f = 1;
        
    }
    
    virtual void doSomething(){
        cout << "A::doSomething()" << endl;
    }
};

#endif
