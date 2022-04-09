#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class DynQueue
{
private:
	class QueueNode
	{
		friend class DynQueue;
		T value;
		QueueNode* next;

		QueueNode(T value, QueueNode* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
	};

	// track front and rear
	QueueNode* front;
	QueueNode* rear;
public:
	DynQueue();
	~DynQueue();

	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	void clear();
};

// Implamentation

template <class T>
DynQueue<T>::DynQueue()
{
	front = rear = nullptr;
}

template <class T>
DynQueue<T>::~DynQueue()
{
	clear();
}

template <class T>
void DynQueue<T>::enqueue(T value)
{
	if (isEmpty())
	{
		front = new QueueNode(value);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(value);
		rear = rear->next;
	}
}

template <class T>
void DynQueue<T>::dequeue(T& value)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << " the queu the empty. \n";
		exit(1); // dont do this
	}
	else
	{
		value = front->value;

		temp = front;
		front = front->next;
		delete temp;
	}

	temp = nullptr;
}

template <class T>
bool DynQueue<T>::isEmpty() const
{
	return (front == nullptr);
}

template <class T>
void DynQueue<T>::clear()
{
	T value;
	while (!isEmpty())
	{
		dequeue(value);
	}
}
