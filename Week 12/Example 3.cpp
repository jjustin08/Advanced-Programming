#include <iostream>
#include "IntQueue.h"
using namespace std;

int main()
{
	IntQueue iQueue(5);

	cout << "Enqueuing 5 items...\n";

	for (int i = 1; i <= 5; i++)
	{
		iQueue.enqueue(i*i);
	}
	// dequeue
	cout << "The values in the que were ";
	while(!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}
	cout << endl;


	return 0;
}