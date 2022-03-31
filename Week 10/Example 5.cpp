// binary search
#include <iostream>
using namespace std;

// function prototype
int binarySeach(const int array[], int first, int last, int value);

int main()
{
	const int SIZE = 20;

	int tests[SIZE] = { 0,1,2,3,4,5,6,7,57,245
			,300,566,746,894,943, 1000,1020,1055,1222,1345 };

	int result;
	int empID;

	cout << "enter an id you wish to search for: ";
	cin >> empID;
	result = binarySeach(tests, 0, SIZE - 1, empID);

	if (result == -1)
	{
		cout << " num does not exist\n";
	}
	else
	{
		cout << " found at element: " << result << " ";
	}


	return 0;
}

int binarySeach(const int array[], int first, int last, int value)
{
	int middle;
	if (first > last)
	{
		return -1;
	}
	middle = (first + last) / 2;
	
	if (array[middle] == value)
	{
		// we foound the value
		return middle;
	}

	if (array[middle] < value)
	{
		return binarySeach(array, middle + 1, last, value);
	}
	else
	{
		return binarySeach(array, first, middle -1, value);
	}
}