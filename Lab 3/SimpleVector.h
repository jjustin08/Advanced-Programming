#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class SimpleVector
{
private:
	T* aptr;
	int arraySize;
	void subError() const;  //Handle subscript out of range errors
public:
	SimpleVector(int);					// constructor
	SimpleVector(const SimpleVector&);  // copy constuctor
	~SimpleVector();
	void push_back(T element);
	void pop_back();
	int size() const
	{
		return arraySize;
	}
	T& operator[](int);			//overloaded [] operator
	void print() const;				// output array elements
};

// Constructors
template <class T>
SimpleVector<T>::SimpleVector(int arraySize)
{
	this->arraySize = arraySize;
	aptr = new T[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = int();
	}
}

// Copy constructor
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = obj.aptr[i];
	}
}

// destructor
template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
	{
		delete[] aptr;
	}
	aptr = nullptr;
}

template<class T>
inline void SimpleVector<T>::push_back(T element)
{
	arraySize++;
	T* temp = new T[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		temp[i] = aptr[i];
	}
	temp[arraySize - 1] = element;
	aptr = temp;
}

template<class T>
inline void SimpleVector<T>::pop_back()
{
	arraySize--;
	T* temp = new T[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		temp[i] = aptr[i];
	}
	aptr = temp;
}

// subError function
template <class T>
void SimpleVector<T>::subError() const
{
	cout << "ERROR";
	exit(0);
}

// overload the [] operator
template <class T>
T& SimpleVector<T>::operator[](int sub)
{
	if (sub < 0 || sub >= arraySize)
	{
		subError();
		return aptr[sub];
	}
	return aptr[sub];
}

// print all entries in the array
template <class T>
void SimpleVector<T>::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aptr[i] << " ";
	}
	cout << endl;
}