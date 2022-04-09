#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main()
{
	DynIntQueue iQueue;

	cout << " enqueue 5 items.. \n";

	for (int i = 1; i <= 5; i++)
	{
		iQueue.enqueue(i * i);
	}
	cout << "the values in the queu were: \n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}



	return 0;
}