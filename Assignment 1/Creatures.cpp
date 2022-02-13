#include "Creatures.h"
#include "AnimationFrame.h"

Creature::Creature()
{
	setLocation(0);
	setFileName("creature1.txt");
	m_ani = new AnimationFrame(getFileName());
	loadFrames();
}

Creature::Creature(int location, string fileName)
{
	setLocation(location);
	setFileName(fileName);
	m_ani = new AnimationFrame(getFileName());
	loadFrames();
}

Creature::~Creature(){}

void Creature::loadFrames()
{
	string* temp;
	temp = m_ani->getFrame(getFileName());
	for (int i = 0; i < 9; i++)
	{
			m_frame[i] = temp[i];
	}
}

int Creature::getLocation()
{
	return m_location;
}

void Creature::setLocation(int location)
{
	this->m_location = location;
}

string Creature::getFileName()
{
	return m_fileName;
}

void Creature::setFileName(string fileName)
{
	this->m_fileName = fileName;
}

void Creature::move()
{
	for (int x = 0; x < m_location; x++)
	{
		cout << "\t";
	}
}

void Creature::animate()
{
	while (m_location < 10)
	{
		for (int i = 0; i < 9; i++)
		{
			move();
			cout << m_frame[i] << endl;
			if (i == 2 || i == 5 || i == 8)
			{
				std::this_thread::sleep_for(1s);
				system("cls");
				m_location++;
			}
		}
	}
}
