#include "intArray.h"
#include <cstdlib>

IntArray::IntArray(int arraySize)
{
	if (arraySize < 0)
	{
		arraySizeError();
	}
	else
	{
		this->arraySize = arraySize;
	}

	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = 0;
	}
}

IntArray::IntArray(const IntArray& obj)
{
	arraySize = obj.arraySize;
	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = *(obj.aPtr + i);
	}
}

IntArray::~IntArray()
{
	if (arraySize > 0)
	{
		delete[0] aPtr;
	}
	aPtr = nullptr;
}



void IntArray::subError() const
{
	cout << "ERROR: subscript ouot of range." << endl;
	exit(0);
}

void IntArray::subError(int subScript) const
{
	cout << "ERROR: subscript ouot of range." << "value: "<< subScript << " is invalid " << endl;
	exit(0);
}

void IntArray::arraySizeError() const
{
	cout << "ERROR: Array size provide is invalid. Please give a size greater than 0" << endl;
	exit(0);
}

int& IntArray::operator[](int sub) const
{
	// Bound checking
	if (sub < 0 || sub >= arraySize)
	{
		subError(sub);
	}

	// good sub value
	return aPtr[sub];
}