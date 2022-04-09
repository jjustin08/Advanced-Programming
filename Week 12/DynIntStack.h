#pragma once

class DynIntStack
{
private:
	class StackNode
	{
		friend class DynIntStack;
		int value;
		StackNode* next;

		// Constructor
		StackNode(int value, StackNode* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
	};

	StackNode* top;
public:
	DynIntStack()
	{
		top = nullptr;
	}
	void push(int);
	void pop(int&);
	bool isEmpty() const;

};