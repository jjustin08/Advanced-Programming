// tower of hanoi
#include <iostream>
#include <string>
using namespace std;

void moveDisks(int, string, string, string);

int main()
{
	moveDisks(32, "peg 1", "peg 2", "peg 3");
	cout << "all disk have been moved!";
	return 0;
}

void moveDisks(int n, string source, string dest, string temp)
{
	if (n > 0)
	{
		// move n -1 disks from source to temp 
		moveDisks(n - 1, source, temp, dest);

		// move a dist from source to dest
		cout << " move disk from " << source << " to " << dest << endl;

		// move n-1 disks from temp to dest
		moveDisks(n - 1, temp, dest, source);
	}


}