#include <iostream>
#include <iomanip>
#include "NumberArray.h"
using namespace std;

int main()
{
	NumberArray first(5, 33.75);

	NumberArray second = first; // trigger the copy constuctor

	// Display the contents of th eobjects
	cout << setprecision(2) << fixed << showpoint;
	cout << "Value store in the first object is: ";
	first.print();
	cout << endl << "Value stored in the second object is: ";
	second.print();
	cout << endl << endl;

	return 0;
}