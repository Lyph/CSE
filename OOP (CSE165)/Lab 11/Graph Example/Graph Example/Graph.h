#ifndef LA9_Graph_h
#define LA9_Graph_h
#include <iostream>
#include "Vertex.h"

using namespace std;

class Graph {
public:
    
    /*! A collection of vertices */
    vector<Vertex*> items;
    
    /*! A method to add a vertex to the items vector */
    void add(Vertex* d){
		d->ref();
		items.push_back(d);
        //insert your code here
        
    }
    
    /*! A method to display the graph as pairs of vertices */
    void print (){
		for (int i = 0; i < items.size(); i += 2) {
			cout << items[i]->getLabel() << " - " << items[i + 1]->getLabel() << endl;
		}
        //insert your code here

    }
    
    /*! A method to free up all the space taken up by the graph */
    void deleteAll(){
        //insert your code here
		for (int i = 0; i < items.size(); i++) {
			(items[i])->unref();
		}
    }
};

#endif
