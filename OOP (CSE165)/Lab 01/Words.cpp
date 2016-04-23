#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	ifstream in("code.cpp");
	string word;
	int counter = 0;
	while (in >> word)
	{
		cout << word<<endl;
		counter++;
	}

	cout << counter;
	return 0;
}
