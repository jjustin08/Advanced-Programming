#include "DynIntStack.h"
#include <iostream>
using namespace std;

int main()
{
	DynIntStack stack;  // notice no capacity
	int catchvar;

	// push values
	for (int i = 5; i <= 25; i += 5)
	{
		cout << "Push: " << i << endl;
		stack.push(i);
	}
	cout << endl;

	// pop values
	for (int i = 0; i < 5; i++)
	{
		cout << "Pop: ";
		stack.pop(catchvar);
		cout << catchvar << endl;
	}

	cout << "attempt to pop again...";
	stack.pop(catchvar);

	return 0;
}