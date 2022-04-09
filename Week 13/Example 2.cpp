// object oriented exception handling
#include <iostream>
#include "IntRange.h"
using namespace std;

int main()
{
	IntRange range(2, 15);
	int userValue;

	cout << "Enter a value in the range of " << range.getLower() << " - " << range.getUpper() << ": ";
	try
	{
		userValue = range.getUserInput();
		cout << "You entered " << userValue << endl;
	}
	catch (IntRange::TooHigh)
	{
		cout << "That value is too high.\n";
	}
	catch (IntRange::TooLow)
	{
		cout << "That value is too low.\n";
	}

	cout << "End of program!\n";

	return 0;
}