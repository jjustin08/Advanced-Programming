#include <iostream>
#include "DynQueue.h"
#include "DynStack.h"
#include <string>
//#include "DynStack.h"
using namespace std;

int main()
{
	DynQueue<double> iQueue;
	DynQueue<string> iQueue2;

	cout << "Enqueue doubles.. \n";
	for (int i = 1.2; i <= 5; i++)
	{
		iQueue.enqueue(i * i);
	}

	cout << "Dequeue doubles.. \n";
	double num;
	for (int i = 1.2; i <= 5; i++)
	{
		iQueue.dequeue(num);
		cout << num << " ";
	}

	cout << "\n\nEnqueue strings.. \n";
	iQueue2.enqueue("bob");
	iQueue2.enqueue("bobby");
	iQueue2.enqueue("jusitn");
	iQueue2.enqueue("aleks");

	cout << "Dequeue strings.. \n";
	string word;
	for (int i = 0; i < 4; i++)
	{
		iQueue2.dequeue(word);
		cout << word << " ";
	}
	cout << endl<<endl;
	
	DynStack<double> iStack;
	double catchvar;

	// push values
	cout << "Pushing doubles";
	for (int i = 5.2; i <= 25; i += 5)
	{
		iStack.push(i);
	}
	cout << endl;

	// pop values
	for (int i = 0; i < 5; i++)
	{
		cout << "Pop: ";
		iStack.pop(catchvar);
		cout << catchvar << endl;
	}


	cout << endl;
	DynStack<string> iStack2;
	string val;
	// push values
	cout << "Pushing strings";
	iStack2.push("hey");
	iStack2.push("justin");
	iStack2.push("heloo");
	iStack2.push("joe");

	cout << endl;

	// pop values
	for (int i = 0; i < 4; i++)
	{
		cout << "Pop: ";
		iStack2.pop(val);
		cout << val << endl;
	}
	cout << endl;



	return 0;
}