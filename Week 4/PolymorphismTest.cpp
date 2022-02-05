#include "Inheritance.h"
#include <iostream>
using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;

	Person* arr[NUM_PEOPLE] =
	{
		new TFaculty("Justin Bennett", Discipline::ANIMATOR, "Mr. "),
		new Student("John Doe", Discipline::SOFTWARE_ENGINEER, nullptr),
		new Faculty("Jane Doe", Discipline::GAME_DEVELOPER),
		new TFaculty("Bob Barker", Discipline::ANIMATOR, "Lord  Commander "),
		new TFaculty("Theresa Jane", Discipline::NONE, "MD. ")
	};

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << arr[i]->getName() << endl;


	}

	return 0;
}