#include "SortedNumList.h"
int main()
{
	SortedNumList list;

	list.add(1.1);
	list.add(5.1);
	list.add(13.1);
	list.add(5.0);
	list.add(3.1);
	list.add(1.4);
	list.add(2.1);

	list.displayList();
	return 0;
}