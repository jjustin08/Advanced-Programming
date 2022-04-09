#pragma once

// static interger stack(array implementation)

class IntStack
{
private:
	int* stackArray;	// array
	int capacity;		// how many items can be stored in the stack
	int top;			// current top of the stack

public:
	IntStack(int capacity); // constructor
	~IntStack()
	{
		delete[] stackArray;
	}
	void push(int value);
	void pop(int& value);
	bool isEmpty() const;

	//stack exceptions
	class Overflow {};
	class Underflow {};
}; 