// Simple recursive function
#include <iostream>
using namespace std;

//function prototpye
void message(int);

int main()
{
	message(3);
	return 0;
}

void message(int times)
{
	if (times > 0)
	{
		cout << "Message " << times << endl;
		message(times - 1);
	}
	
}