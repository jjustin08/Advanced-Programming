#include "Story.h"

Story::Story()
{
	loadStory();
}

Story::~Story()
{
}

void Story::read()
{
	cout << para << endl;
	getline(file, para,'@');
}

void Story::loadStory()
{
	file.open("Story.txt");

	if (!file)
	{
		cout << "the file was not found." << endl;
	}

	getline(file, para, '@');
}
