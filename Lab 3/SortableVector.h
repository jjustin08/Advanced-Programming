#pragma once
#include "SimpleVector.h"

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
	SortableVector(int arraySize) : SimpleVector<T>(arraySize) { }
	SortableVector(SortableVector&);
	SortableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) { }
	// sort array
	void sort();
};

template <class T>
SortableVector<T>::SortableVector(SortableVector& obj) : SimpleVector<T>(obj) { }

template<class T>
void SortableVector<T>::sort()
{
	int size = this->size();
	T small; 
	for (int i = 0; i < size; i++)
	{
		small = this->operator[](i);
		for (int x = i+1; x < size; x++)
		{
			if (small > this->operator[](x))
			{
				small = this->operator[](x);
				//swaps positions if one is smaller
				this->operator[](x) = this->operator[](i);
				this->operator[](i) = small;
			}
		}
	}

}
