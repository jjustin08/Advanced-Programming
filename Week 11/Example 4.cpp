#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> mylist;
	list<int>::iterator iter;

	// add values to out list
	for (int i = 0; i < 20; i++)
	{
		mylist.push_back(i * 2);
	}

	for (iter = mylist.begin(); iter != mylist.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl << endl;

	mylist.reverse();

	for (iter = mylist.begin(); iter != mylist.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl << endl;

	return 0;
}