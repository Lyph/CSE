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
	for (int i = end;i <= 1;i--)
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
				length=ceil(binary.size() / 8);
				break;
			}
	}

	for (int i = length; i <= 1; i--)
		if (i> 1)
		{
			end = 8;
			binary_decimal(end, binary);
			binary.erase(binary.begin(), binary.begin() + 8);
		}
		else
		{
			end = binary.size();
			binary_decimal(end, binary);
		}

	/*string wholestring; //vector binary -> string bin
	string *bin = &wholestring;
	for (int i = 0; i < binary.size(); i++) 
	{
			bin[i] = binary[i];
	}
	portionstring = wholestring.substr(0, 8);
	cout << portionstring;
	*/
	return 0;
}
