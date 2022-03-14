// demostrate stream object error testing
#include <iostream>
#include <fstream>
using namespace std;

void showState(fstream&);

int main()
{
	fstream testFile("stuff.dat", ios::out);
	if (testFile.fail())
	{
		cout << "cannot open the file.\n";
		return 1;
	}

	// the file has opened successfully
	int num = 10;
	cout << "writing to the file.\n";
	testFile << num;
	showState(testFile);
	testFile.close();

	// Open the same file in iput mode
	testFile.open("stuff.dat", ios::in);
	if (testFile.fail())
	{
		cout << "Cannot open the file.\n";
	}
	cout << "reading from the file. \n";
	testFile >> num;
	showState(testFile);

	// are any error bits true? yes eof bit

	// invalid read
	cout << "forcing bad read operation. \n";
	testFile >> num;
	showState(testFile);

	testFile.clear();

	testFile.close();

	return 0;
}

void showState(fstream& file)
{
	cout << "File status:\n";
	cout << "eof bit: " << file.eof() << endl;
	cout << "fail bit: " << file.fail() << endl;
	cout << "bad bit: " << file.bad() << endl;
	cout << "good bit: " << file.good() << endl;
	file.clear();
}