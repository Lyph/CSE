#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 
#include <bitset>
#include <vector>
#include <math.h>

using namespace std;

void binary_decimal(int end, vector<int> binary) {
	int result = 0, power = 0;
	int i = end;
	for (i;i >= 0;i--)
	{
		if ((binary[i]) == 1)
		{
			result += pow(2, power);
		}
		power++;
	}
	cout << result << " ";
}

int main()
{
	int length, end;
	string x,y;
	cin >> x;
	vector<int> binary;
	

	for (int i = 0; i<x.length();i++)		//vector string with all the 0s and 1s
	{
			y = x[i];
			if (y == "0")
			{
				binary.push_back(0);
			}
			else if (y == "1")
			{
				binary.push_back(1);
			}
			else
			{
				break;
			}
	}

	length = ceil(binary.size() / 8);

	for (int i = length; i >= 0; i--)
		if (i>= 1)
		{
			binary_decimal(7, binary);
			binary.erase(binary.begin(), binary.begin() + 8);
		}
		else
		{
			binary_decimal(binary.size() - 1, binary);
		}


	return 0;
}