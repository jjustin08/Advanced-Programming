// getline demonstration
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	string input;

	// open the file
	file.open("wallace.txt", ios::in);
	if (file.fail())
	{
		cout << "file cant open error" << endl;
		return 1;
	}
	// read th efile adn print to the screan
	getline(file, input, ',');
	while (!file.fail())
	{
		cout << input; //<< endl;
		getline(file, input,',');
	}

	// clsoe the file
	file.close();

	return 0;
}