#include "AnimationFrame.h"
#include <fstream>
#include <string>



AnimationFrame::AnimationFrame()
{
}

AnimationFrame::AnimationFrame(string fileName)
{
	this->fileName = fileName;
}

AnimationFrame::~AnimationFrame() {}



string* AnimationFrame::getFrame(string fileName)
{
	fstream creature;
	creature.open(fileName, ios::in);
	if (creature.is_open())
	{
		cout << "File loaded" << endl;
		for (int i = 0; i < 9; i++)
		{
			getline(creature, line);
			frame[i] = line;
		}
	}
	else
	{
		cout << "Could not load file!!!" << endl;
	}
	return frame;
}
