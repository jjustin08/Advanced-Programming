// overload a template function
#include <iostream>
using namespace std;

template <class T>
T sum(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	int num1, num2, num3, num4;

	cout << "Enter 4 values septerated with spaces: ";
	cin >> num1 >> num2 >> num3 >> num4;

	return 0;
}