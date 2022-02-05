#include <iostream>
#include "Enemies.h"
using namespace std;

int main()
{
	const int NUM_ENEMIES = 4;

	Enemy* arr[NUM_ENEMIES] =
	{
		new Skeleton(),
		new Troll(),
		new Orc(),
		new DarkOrc
	};

	for (int i = 0; i < NUM_ENEMIES; i++)
	{
		arr[i]->Attack();
		cout << endl;
	}

	return 0;
}
