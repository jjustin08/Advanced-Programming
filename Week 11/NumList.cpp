#include "NumList.h"

NumList::~NumList()
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

void NumList::add(double number)
{
	// 2 scenarios to consider:

	
	if (head == nullptr)
	{
		//1 . list is empty
		head = new ListNode(number);
	}
	else
	{
		//2 list is not empty
		// must traverse to the last node of the list
		ListNode* nodePtr = head;
		// travers to end
		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = new ListNode(number);
	}
}

void NumList::displayList() const
{
	ListNode* nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << " ";
		nodePtr = nodePtr->next;
	}

}