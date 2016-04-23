#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;

struct Link {
	void* data;
	Link* next;

	void initialize(void* dat, Link* nxt) {
		data = dat;
		next = nxt;
	}
};

struct LinkedList {
	Link *head;

	LinkedList() {
		head = NULL;
	}

	LinkedList(void* dat, Link* a) {
		head = new Link();
		head->initialize(dat, a);

	}
	
	void add(Link* start, int amt) {
		// head  = address of start
		Link * chain = new Link();
		chain->initialize(new double(0), NULL);

		Link * current = chain;
		for (int i = 1; i < amt; i++)
		{
			current->next = new Link();
			current->next->data = new double(i);
			current->next->next = NULL;
			current = current->next;
		}


		start->next = chain;
	}

	void print() {
		while (head != NULL) {
			cout<<*(double *)(head->data)<<endl;
			head = head->next;
		}

	}


	void cleanup() {


	}
};
#endif