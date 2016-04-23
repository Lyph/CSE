#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
	ifstream in("code.cpp");
	string line;
	vector<string> code;
	int num = 0;
	while(getline(in, line))
	{
		code.push_back(line);
		cout << line;
	}
	
	//for (int i = code.size()-1; i >= 0; i--){
	//	
	//	cout <<num<<": "<<code[i]<<endl;
	//	num++;
	//}

	return 0;
}
