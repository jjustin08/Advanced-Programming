#include "Creatures.h"
#include "AnimationFrame.h"

Creature::Creature()
{
	setLocation(0);
	setFileName("creature1");
}

Creature::Creature(int location)
{
	setLocation(location);
	setFileName("creature1");
}

Creature::~Creature()
{
}

int Creature::getLocation()
{
	return location;
}

void Creature::setLocation(int location)
{
	this->location = location;
}

string Creature::getFileName()
{
	return fileName;
}

void Creature::setFileName(string fileName)
{
	this->fileName = fileName;
}

void Creature::animate()
{

}
