#include <iostream>
#include "NumberArray.h"
using namespace std;

NumberArray::NumberArray()
{
	cout << "No size of array provided. defaulting to 10";
	arraySize = 10;
	aPtr = new double[arraySize];
	setValue(1);
}

NumberArray::NumberArray(NumberArray& obj) 
{
	arraySize = obj.arraySize;
	//aPtr = obj.aPtr;  // no good
	aPtr = new double[arraySize]; // good
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = obj.aPtr[i];
	}
}

NumberArray::NumberArray(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}

NumberArray::~NumberArray()
{
	if (arraySize > 0) // ensure array exists
	{
		delete[] aPtr;
		aPtr = nullptr;
	}
}

void NumberArray::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aPtr[i] << " ";
	}
}

void NumberArray::setValue(double value)
{
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = value;
	}
}