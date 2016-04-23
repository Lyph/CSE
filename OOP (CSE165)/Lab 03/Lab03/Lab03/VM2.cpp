/*
#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std; 

int main()
{
	string input = " ";
	vector<vector<string>*> V(10);
	do
	{
		cin >> input;
		if (input == "quit") { break; }
		//create a new vector if it doesn't exist yet
		int index = input.length() - 1, checker = 0;
		if (V[index] == NULL) 
		{
			V[index] = new vector<string>();
		}
		//check for duplicates
		int x = V[index]->size() - 1;
		for (int i = 0; i<=x;i++)
		{
			if ((*V[index])[i] == input)
			{
				checker++;
				break;
				//V.erase((*V[index])[V.begin+i]);
			}
		}

		if (x == -1) //this is for the first value 
		{
			checker == 0;
		}
		if(checker==0)
		{
			V[index]->push_back(input);
		}
		

	} while (input != "quit");

	//print
	for (int i = 0; i < 10;i++) 
	{
		if (V[i] == NULL) { continue; }
		for (int j = 0; j < V[i]->size();j++)
		{
				cout << (*V[i])[j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/