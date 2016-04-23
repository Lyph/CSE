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

string compare(string line, string pattern)
{
	int counter = 0;
	for (int k = 0; k < line.length(); k++) 
	{
		if (pattern[counter] == line[k])
		{
			counter++;
			if (counter == pattern.length())
			{
				line = line.replace(k-(pattern.length()-1),pattern.length(),"");
				return line;
			}
		}
		else 
		{
			counter = 0;
		}
	}
	return line; //if line reaches the end and no match return zero
}

int main()
{
	string input = " ", line,result;
	vector<string> V;
	do
	{
		cin >> input;
		if (input == "quit") { break; }
		//create a new vector if it doesn't exist yet
		if (input.size() <= 3) {
			V.push_back(input);
		}
		else 
		{
			line = input;
			if (V.size() == 0) 
			{ 
				cout << line << endl;
				continue;
			}
			for (int i = 0; i < V.size();i++)
			{
					string pattern = V[i];
					line = compare(line, pattern);
			}
			cout << line<<endl;
		}
	} while (input != "quit");


	return 0;
}
*/