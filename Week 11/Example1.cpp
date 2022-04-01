#include "NumList.h"
using namespace std;

int main()
{
	NumList list;

	list.add(2.5);
	list.add(3.5);
	list.add(4.5);
	list.add(5.5);

	list.displayList();

	return 0;
}