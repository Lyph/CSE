#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string remove(string Original)
{
	for( int i=0; i < Original.length();i++){
		if (Original[i]>90 || Original[i]<65){
			Original.erase (i);
		}
	}	
	return Original;
}

string Upper(string Original)
{
	for( int i=0; i < Original.length();i++){
		Original[i] = toupper(Original[i]);
	}	
	return Original;
}

int main() 
{
	ifstream in("words.txt");
	string word, WantedWord;
	cin >> WantedWord;
	WantedWord = Upper(WantedWord);
	
	int counter = 0;
	while (in >> word)
	{
		word = Upper(word);
		word = remove(word);
		if (WantedWord == word)
		{
			counter++;
		}
	}

	cout << counter;
	return 0;
}
