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
	int checker[26], index;
	vector<vector<string>*> V(26);
	do
	{
		cin >> input;
		if (input == "quit") { break; }
		index = (int)input[0] - 97;
		if (input.length() > 1)
		{
			//create a new vector if it doesn't exist yet
			if (V[index] == NULL)
			{
				V[index] = new vector<string>();
				V[index]->push_back(input);
				checker[index] = input.length();
			}
			else
			{
				if (checker[index] < input.length())
				{
					V[index]->pop_back();
					V[index]->push_back(input);
					checker[index] = input.length();
				}
			}
		}
		else
		{
			if(V[index]==NULL)
			{
				cout << input<<endl;
			}
			else 
			{
				cout << (*V[index])[0]<<endl;
			}
		}

	} while (input != "quit");


	return 0;
}