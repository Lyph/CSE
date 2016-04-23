#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
#include <stdlib.h> 


using namespace std; 

int main()
{
	int x = 0, y = 1;
		cin>>x;
		for (int i = 2; i < x; i++){
			for (int j = 2; j<=i-1; j++){
				y = y * i%j;
				//cout <<y<<endl;
			}
			if (y != 0){
				cout<< i <<endl;
			}
			y = 1;
		}
	return 0;
}


