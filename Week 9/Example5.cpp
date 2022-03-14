// Demonstrate file rewind
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	fstream ioFile("rewind.txt", ios::out);

	//test open
	if (!ioFile)
	{
		cout << "error";
		return 1;
	}

	// write to the file
	ioFile << "is this class too easy?"<<endl<< "no you just smart"<<endl;
	ioFile.close();

	// open the fike
	ioFile.open("rewind.txt", ios::in);
	if (!ioFile)
	{
		cout << "eorry";
		return 1;
	}

	// read the file and print
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		cout.put(ch);
		ioFile.get(ch);
	}
	// rewind th efile
	ioFile.clear();
	ioFile.seekg(0L, ios::beg);

	// read the file and print
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		cout.put(ch);
		ioFile.get(ch);
	}

	ioFile.close();

	return 0;
}