#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

// bad_allo occurs when you cannot allocate memory

int main()
{
	int* p;
	try
	{
		p = new int[2];
		p[0] = 10;
		p[1] = 20;
		throw bad_alloc();
	}
	catch (bad_alloc b)
	{
		cout << b.what();
		exit(1);
	}

	cout << p[0] << " " << p[1] << endl;

	return 0;
}