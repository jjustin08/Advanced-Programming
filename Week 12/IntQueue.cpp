#include "IntQueue.h"
#include <iostream>
#include <cstdlib>

using namespace std;

IntQueue::IntQueue(int s)
{
	queueArray = new int[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

IntQueue::~IntQueue()
{
	delete[] queueArray;
}

void IntQueue::enqueue(int num)
{
	if(isFull())
	{
		cout << "the queue is full\n";
		exit(1);  // dont do this
	}
	else
	{
		rear = (rear + 1) % queueSize;

		queueArray[rear] = num;

		numItems++;
	}
}

void IntQueue::dequeue(int& num)
{
	if (isEmpty())
	{
		cout << " the queue is empty\n";
		exit(1); // dont do this
	}
	else
	{
		front = (front + 1) % queueSize;

		num = queueArray[front];
		numItems--;
	}
}

bool IntQueue::isEmpty() const
{
	return !(numItems > 0);
}

bool IntQueue::isFull() const
{
	return !(numItems < queueSize);
}

void IntQueue::clear()
{
	front = rear = -1;
	numItems = 0;
}
