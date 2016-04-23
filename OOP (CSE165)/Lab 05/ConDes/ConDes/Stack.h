#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

struct Stack {
	int count;
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	Stack(int n)
	{
		count = 0;
		for (double i = 0; i < n;i++)
		{
			push((double)1 + i*1/10);	

		}
	}

	Stack()
	{
		head = 0;
		count = 0;
	}

	
	void push(double dat){
		count++;
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop(){
		if(head == NULL)
			return 0;
		count--;
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
	~Stack()
	{
		while (count > 0)
		{
			cout<< pop()<<" ";
		}

	}
};
#endif
