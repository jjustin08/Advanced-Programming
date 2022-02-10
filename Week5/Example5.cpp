#include <iostream>
#include "SearchableVector.h"
using namespace std;

int main() 
{
	const int SIZE = 10;

	SearchableVector<int> intTable(SIZE);
	SearchableVector<double> doubleTable(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		intTable[i] = (i * 2);
		doubleTable[i] = (i * 2.12);
	}

	//Display th evlaues in the array
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	// demo the built in + operator
	for (int i = 0; i < SIZE; i++)
	{
		intTable[i] += 5;
		doubleTable[i] += 5.3;
	}

	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	int result;
	cout << "Search for 6 in intTable.\n";
	result = intTable.findItem(6);
	if (result == -1)
	{
		cout << "6 was not found in intTable.\n";
	}
	else
	{
		cout << "6 was found in intTable at index " << result << endl;
	}


	return 0;
}