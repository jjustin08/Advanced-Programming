#include "DynIntQueue.h"
#include <iostream>
#include "cstdlib"
using namespace std;

DynIntQueue::DynIntQueue()
{
	front = rear = nullptr;
}

DynIntQueue::~DynIntQueue()
{
	clear();
}

void DynIntQueue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}

void DynIntQueue::dequeue(int& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << " the queu the empty. \n";
		exit(1); // dont do this
	}
	else
	{
		num = front->value;

		temp = front;
		front = front->next;
		delete temp;
	}
	temp = nullptr;
}

bool DynIntQueue::isEmpty() const
{
	return (front == nullptr);
}

void DynIntQueue::clear()
{
	int value;

	while (!isEmpty())
	{
		dequeue(value);
	}

}
