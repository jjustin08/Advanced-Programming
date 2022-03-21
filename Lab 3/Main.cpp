#include <iostream>
#include "SimpleVector.h"
#include "SortableVector.h"

using namespace std;
int main()
{
	SimpleVector<int> numbers(10);
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i];
	}
	cout << endl;
	numbers.push_back(2);
	numbers.push_back(1);
	numbers.push_back(3);
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i];
	}
	numbers.pop_back();
	numbers.pop_back();
	cout << endl;
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i];
	}
	cout << endl << endl << endl;

	SortableVector<int> vect(10);
	vect[0] = 6;
	vect[2] = 1;
	vect[3] = 7;
	vect[4] = 313;
	vect[5] = 67;
	vect[6] = 31;
	vect[7] = 561;
	vect[8] = 2;
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	vect.sort();
	cout << endl<<endl;
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}

	return 0;
}