// intro to exception handling
#include <iostream>
#include <string>
using namespace std;

// function prototype
double divide(double, double);

int main()
{
	int num1, num2;
	double quotient;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	try
	{
		quotient = divide(num1, num2);
		cout << "The quotient is " << quotient << endl;
	}
	catch (string exceptionString)
	{
		cout << exceptionString;
	}
	catch (int exInt)
	{
		cout << "ERROR! something happend " << exInt << endl;
	}

	cout << "End of program!\n\n";



	return 0;
}

double divide(double numerator, double denomination)
{
	if (denomination == 0)
	{
		//throw string("ERROR: Cannot divide by zero\n");
		throw int(100);
	}
	else
	{
		return numerator / denomination;
	}
	
}