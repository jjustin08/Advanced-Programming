#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// when working with a file stream
	// 1. declare the filestream object
	// 2. "Open" the filestream to a desired file
	// 3. work on the file
	// 4. "close" the filestream

	// 1. 
	fstream inOutFile;
	string word; // used to read a word or line from hte file

	// 2.
	inOutFile.open("inout.txt");
	// check if the filestream is opened
	if (!inOutFile)
	{
		// file was not found or opened correctly
		cout << "the file was not found." << endl;
		return 1;
	}

	// 3.
	while (inOutFile >> word)
	{
		cout << word << endl;
	}

	// end of file flag is set. must clear to preform other actions
	inOutFile.clear();

	inOutFile << "wallace" << endl;



	// 4.
	inOutFile.close();
	return 0;

	return 0;
}
