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
	catch (IntRange::TooHigh e)
	{
		e.exceptionMessage();
	}
	catch (IntRange::TooLow ex)
	{
		ex.exceptionMessage();
	}

	cout << "End of program!\n";

	return 0;
}