#include "IntStack.h"
#include <iostream>
using namespace std;

int main()
{
	IntStack stack(5);
	int values[] = { 5,10,15,20,25 };
	int value;

	cout << "pushing... \n";
	for (int i = 0; i < 5; i++)
	{
		cout << values[i] << " ";
		stack.push(values[i]);
	}

	cout << "\nPopping..\n";
	while (!stack.isEmpty())
	{
		stack.pop(value);
		cout << value << " ";
	}
	cout << endl;


	return 0;
}