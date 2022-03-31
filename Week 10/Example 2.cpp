// count th enumber of times a character appears
#include <iostream>
#include <string>
using namespace std;

// function prototype
int frequency(char, string, int);

int main()
{
	string inputString = "hello everyone my name is wallave";

	cout << "letter e apperas " << frequency('e', inputString, 0) << " times.\n";
	return 0;
}

int frequency(char ch, string inputString, int position)
{
	// base case - we have reached the end of the string
	if (position == inputString.length())
	{
		return 0;
	}
	if (inputString[position] == ch)
	{
		return 1 + frequency(ch, inputString, position+1);
	}
	else
	{
		return frequency(ch, inputString, position + 1);
	}

}