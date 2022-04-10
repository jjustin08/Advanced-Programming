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
	cout << para;
	getline(file, para,'@');
}

void Story::loadStory()
{
	file.open("Data/Story.txt");
	// check if the filestream is opened
	if (!file)
	{
		// file was not found or opened correctly
		cout << "the file was not found." << endl;
	}
	getline(file, para, '@');
}
