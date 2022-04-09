#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class DynStack
{
private:
	class StackNode
	{
		friend class DynStack;
		T value;
		StackNode* next;

		// Constructor
		StackNode(T value, StackNode* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
	};

	StackNode* top;
public:
	DynStack()
	{
		top = nullptr;
	}
	void push(T);
	void pop(T&);
	bool isEmpty() const;

};


template <class T>
void DynStack<T>::push(T val)
{
	top = new StackNode(val, top);
}

template <class T>
void DynStack<T>::pop(T& val)
{
	StackNode* temp;

	if (isEmpty())
	{
		cout << "the stack is empty\n";
		exit(1); // dont do this use exception handling
	}
	else
	{
		val = top->value;

		temp = top;
		top = top->next;
		delete temp;
	}

	temp = nullptr;
}

template <class T>
bool DynStack<T>::isEmpty() const
{
	return (!top);
}
