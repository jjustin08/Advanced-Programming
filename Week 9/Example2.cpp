// Demostrate the use of ostringstream object
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// function prototype
string dollarFormat(double);

int main()
{
	const int ROWS = 3, COLS = 2;

	// 2D Array
	double amount[ROWS][COLS] = {	184.5,	7,
									59.15,	64.32,
									7.29,	1289.1234 };
	
	// format table of dollar amount to be right justified and column width of 10
	cout << right;
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLS; column++)
		{
			cout << setw(10) << dollarFormat(amount[row][column]);
		}
		cout << endl;
	}

	return 0;
}

string dollarFormat(double amount)
{
	// create ostringstream object
	ostringstream outStr;

	// set up format information and wrtie to outStr
	outStr << showpoint << fixed << setprecision(2); //forces 2 decimal places
	outStr << '$' << amount; // '$' + amount

	return outStr.str();

}