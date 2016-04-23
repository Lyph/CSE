#ifndef LA7_Object_h
#define LA7_Object_h

#include <iostream>
#include <typeinfo>

using namespace std;

//Forward declaration of Number and Word
class Number;
class Word;

//The Object ADT
class Object {
public:
    virtual Object* multiply ( const Object* obj ) const = 0;
    virtual void print() = 0;
};

//Define your Number and Word classes below

class Word :public Object //Define Word first instead of Word + multiply function
{
public:
	string j;
	Word() {
		j = " ";
	}

	Word(string w) {
		j = w;
	}

	~Word() {}

	Object* multiply(const Object* obj) const;

	void print() {
		cout << this->j << endl;
	}
};
class Number:public Object
{
public:
	int i;

	Number() {
		i = 0;
	}

	Number(int num) {
		i = num;
	}

	~Number() {}

	Object* multiply(const Object * obj) const 
	{
		Number test;

		if (typeid(*obj) == typeid(test)) {
			// obj is a Number
			Object *a = const_cast<Object*>(obj);
			Number *b = dynamic_cast<Number*>(a);
			static Number *tempN = new Number();
			tempN->i = this->i * b->i;
			return tempN;

		}
		else {
			Object *a = const_cast<Object*>(obj);
			Word *b = dynamic_cast<Word*>(a);
			static Word *tempW = new Word();
			for (int p = 0; p < this->i;p++)
			{
				tempW->j += b->j;
			}
			return tempW;
		}
	}

	void print() {
		cout << this->i<<endl;
	}

};

	Object* Word::multiply(const Object * obj) const
	{
		Number test;

		if (typeid(*obj) != typeid(test)) { //word * num
			// obj is a Word
			Object *a = const_cast<Object*>(obj);
			Number *b = dynamic_cast<Number*>(a);
			static Word *tempW1 = new Word();
			for (int p = 0; p < b->i;p++)
			{
				tempW1->j += this->j;
			}
			return tempW1;

		}
		else {//word *word.length
			Object *a = const_cast<Object*>(obj);
			Word *b = dynamic_cast<Word*>(a);
			static Word *tempW2 = new Word();
			for (int p = 0; p < b->j.length();p++)
			{
				tempW2->j += this->j;
			}
			return tempW2;
		}

	}

#endif