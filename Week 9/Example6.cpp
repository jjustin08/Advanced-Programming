// Binary files
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file("anything.wewant", ios::out | ios::binary);
	if (!file)
	{
		cout << "error";
		return 1;
	}

	// interager data to write to the binary file
	int buffer[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(buffer) / sizeof(buffer[0]);

	// write the data and close th efile
	cout << "now writing the data to the file. \n";
	file.write(reinterpret_cast<char*>(buffer), sizeof(buffer));
	file.close();


	// read in the binary file

	file.open("anything.wewant", ios::in | ios::binary);
	if (!file)
	{
		cout << "erry";
		return 1;
	}

	cout << "Reading back the data. \n";
	file.read(reinterpret_cast<char*>(buffer), sizeof(buffer));

	// write out the array to the console
	for (int i = 0; i < size; i++)
	{
		cout << buffer[i] << " ";
	}

	file.close();
	return 0;
}