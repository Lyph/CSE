#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset>
#include <vector>

using namespace std; 

int main()
{
	int x = 0, y = 0;
	vector<int> binary;
	while (x != -1)
	{
		cin >> x;
		y = x;
		if (x == -1)
		{
			break;
		}
		cout << hex <<x <<" ";
		while(y!= 0){
			binary.push_back(y%2);

			y = y / 2;
		}
		for (int i = binary.size()-1;i>=0;i--){
			cout << binary[i];
		}
		binary.clear();	
	}
	return 0;
}



