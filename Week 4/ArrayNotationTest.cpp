#include <iostream>
#include "intArray.h"
using namespace std;

int main()
{
	IntArray table(10);

	for (int i = 0; i < table.size(); i++)
	{
		table[i] = i;
	}

	for (int i = 0; i < table.size(); i++)
	{
		cout << table[i] << " ";
	}
	cout << endl;


	table[table.size()] = 0; // table[10] is ivalid

	return 0;
}