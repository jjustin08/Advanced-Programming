#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// create all creatures


	// display creatues one after another


	//Test

	fstream myFile;
	//myFile.open("just.txt", ios::out); // write
	//if (myFile.is_open())
	//{
	//	myFile << "Hello\n";
	//	myFile.close();
	//}
	//myFile.open("just.txt", ios::app); // write
	//if (myFile.is_open())
	//{
	//	myFile << "Hello2\n";
	//	myFile.close();
	//}
	//Read
	myFile.open("creature1.txt", ios::in);
	if (myFile.is_open())
	{
		string line;
		
		for (int i = 0; i < 3; i++)
		{
			for (int i = 0; i < 3; i++)
			{
				getline(myFile, line);
				cout << "\t\t\t\t\t\t\t\t";
				cout << line << endl;
			}
			cout << "yo" << endl;
		}
		
		myFile.close();
	}

	return 0;
}