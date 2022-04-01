#include <string>
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList<string> list1;
	LinkedList<double> list2;
	LinkedList<int> list3;

	list1.add("wall");
	list1.add("car");
	list1.add("just");

	list2.add(6.7);
	list2.add(7.7);
	list2.add(1.7);

	list3.add(1000);

	list1.displayList();
	list2.displayList();
	list3.displayList();
	cout << endl << endl;

	list1.remove("just");
	list1.remove("6.7");
	list1.remove("100");
	
	
	list1.displayList();
	list2.displayList();
	list3.displayList();
	cout << endl << endl;
	return 0;
}