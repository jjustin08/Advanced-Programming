#include "SortedNumList.h"

void SortedNumList::add(double number)
{
	ListNode* nodePtr;
	ListNode* prevNodePtr;

	// 2 Scenarios

	
	if (head == nullptr || head->value >= number)
	{
		// 1. the linked list is empty or the value being inseted must go first
		head = new ListNode(number, head);
	}
	else
	{
		// 2. linked list is not empty and the item is placed after the first node
		prevNodePtr = head;
		nodePtr = head->next;

		//traverse
		while (nodePtr != nullptr && nodePtr->value < number)
		{
			prevNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		// found where to insert
		prevNodePtr->next = new ListNode(number, nodePtr);
	}
	prevNodePtr = nullptr;
	nodePtr = nullptr;

}