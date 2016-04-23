	#include <iostream> 
	#include <string> 
	#include <fstream> 
	#include <iomanip> 
	#include <stdlib.h> 
	#include <bitset>
	#include <vector>
	#include <math.h>
	
	using namespace std; 
	
	void binary_decimal(int x){
		int result = 0, i = 0;
		while(x != 0)
		{
			if (x%10 == 1)
			{
				result += pow(2,i);
			}
			x /= 10;
			i++;
		}
		cout <<result<<" ";
	}
	
	void reverse(int x)
	{	
			while(x!= 0){
				cout<<x%10;
				x = x / 10;
			}
			cout<<" ";
			
	}
	
	void negated(int x)
	{	
			vector<int> binary;
			while(x!= 0){
				binary.push_back(x%10);
	
				x = x / 10;
			}
			for (int i = binary.size()-1;i>=0;i--){
				if (binary[i] == 0){
					cout <<"1";
				}
				else{
					cout<<"0";
				}
			}
			cout<<endl;
	}
	
	int main()
	{
		int x = 0;
		while (x != -1)
		{
			cin >> x;
			if (x == -1)
			{
				break;
			}
			
			//y = x;
			binary_decimal(x);
			reverse(x);
			negated(x);
			//binary.clear();	
		}
		return 0;
	}
	
	

