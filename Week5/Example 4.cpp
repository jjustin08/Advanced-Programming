#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
	const int SIZE = 10;

	SimpleVector<int> intTable(SIZE);
	SimpleVector<double> doubleTable(SIZE);

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

	return 0;
}