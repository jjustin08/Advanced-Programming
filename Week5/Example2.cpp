#include <iostream>
#include <string>
using namespace std;

template <class T>
T minimum(T arr[], int size)
{
	T smallest = arr[0]; // Default first item to be the smallest
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < smallest) // Is the current element smaller then "smallest"?
		{
			smallest = arr[i];
		}
	}
	return smallest;
}



int main()
{
	int arr1[] = { 40, 20, 25, 50, 10 };
	// Call a function "minimum(arr, size)" 
	cout << "The minimum number is " << minimum(arr1, 5) << endl;

	string arr2[] = { "Wallace", "Bob", "Jane", "Justin", "Andy" };

	cout << "The minimum string is " << minimum(arr2, 5) << endl;
	return 0;
}
