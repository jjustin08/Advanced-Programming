#pragma once
#include <iostream>
using namespace std;

class NumList
{
protected:
	// represent one node
	struct ListNode
	{
		// each node has a value and a pointer to another node (maybe)
		double value;
		ListNode* next;

		ListNode(double value1, ListNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	// represent the beginning of the linked list
	ListNode* head;

public:
	//constructor
	NumList()
	{
		// init empty linked list
		head = nullptr;
	}
	// destructor
	~NumList();
	// member functions
	void add(double number);
	void displayList() const;
};