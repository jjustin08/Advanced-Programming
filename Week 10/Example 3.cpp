// factorial
#include <iostream>
using namespace std;

// function proto
int factorial(int);

int main()
{
	int number;
	cout << "enter num < 30";
	cin >> number;
	cout<<"the factorial of " << number << " is " << factorial(number) << endl;

	return 0;
}


int factorial(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}

}