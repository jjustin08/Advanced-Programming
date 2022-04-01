#pragma once
#include <iostream>
using namespace std;

template<class T>
class LinkedList
{
protected:
	// represent one node
	struct ListNode
	{
		// each node has a value and a pointer to another node (maybe)
		T value;
		ListNode* next;

		ListNode(T value1, ListNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	// represent the beginning of the linked list
	ListNode* head;

public:
	//constructor
	LinkedList()
	{
		// init empty linked list
		head = nullptr;
	}
	// destructor
	~LinkedList();
	// member functions
	void add(T value);
	void remove(T value);
	void displayList() const;
};

template<class T>
LinkedList<T>::~LinkedList()
{
	ListNode* nodePtr = head;
	while (nodePtr != nullptr)
	{
		ListNode* garbage = nodePtr;
		nodePtr = nodePtr->next;
		delete garbage;
		garbage = nullptr;
	}
}

template<class T>
void LinkedList<T>::add(T value)
{
	if (head == nullptr)
	{
		head = new ListNode(value);
	}
	else
	{
		ListNode* nodePtr = head;
		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
		}

		nodePtr->next = new ListNode(value);
	}
}

// removal
template<class T>
void LinkedList<T>::remove(T value)
{
	ListNode* nodePtr = nullptr;
	ListNode* prevNodePtr = nullptr;
	if (head == nullptr)
	{
		return;
	}
	
	if (head->value == value)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
		nodePtr = nullptr;
	}
	else
	{
		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->value != value)
		{
			// traverse
			prevNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr)
		{
			prevNodePtr->next = nodePtr->next;
			delete nodePtr;
		}
	}
	nodePtr = nullptr;
	prevNodePtr = nullptr;
}

template<class T>
void LinkedList<T>::displayList() const
{
	ListNode* nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << " ";
		nodePtr = nodePtr->next;
	}
}