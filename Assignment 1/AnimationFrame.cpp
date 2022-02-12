#include "AnimationFrame.h"
#include <fstream>
#include <string>



AnimationFrame::AnimationFrame(string fileName)
{
	this->fileName = fileName;
}

AnimationFrame::~AnimationFrame() {}


void AnimationFrame::move(int location)
{
	for (int x = 0; x < location; x++)
	{
		cout << "\t";
	}
}

void AnimationFrame::getFrame(int location)
{
	fstream creature;
	creature.open(fileName, ios::in);
	if (creature.is_open())
	{
		cout << "File loaded" << endl;
		for (int i = 0; i < 3; i++)
		{
			move(location);
			getline(creature, line);
		}
	}
	else
	{
		cout << "Could not load file!!!" << endl;
	}
	
}
