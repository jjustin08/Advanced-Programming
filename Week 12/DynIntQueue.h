#pragma once
class DynIntQueue
{
private:
	class QueueNode
	{
		friend class DynIntQueue;
		int value;
		QueueNode* next;

		QueueNode(int value, QueueNode* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
	};

	// track front and rear
	QueueNode* front;
	QueueNode* rear;
public:
	DynIntQueue();
	~DynIntQueue();

	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	void clear();
};

