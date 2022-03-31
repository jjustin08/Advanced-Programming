// fibonacci numbers
#include <iostream>
using namespace std;

int fib(int);

int main()
{
	cout << " first 10 fib numbers are \n";
	for (int i = 0; i < 20; i++)
	{
		cout << fib(i) << endl;
	}
	return 0;
}

/*
fibonacci

5th fib # = 3rd + 4th fib#

*/



int fib(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}

}