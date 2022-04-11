#include "Room.h"
#include <fstream>

Room::Room(string fileName)
{
	loadFile(fileName);
}

Room::~Room()
{
}

vector<string> Room::getRooms()
{
	return connectingRooms;
}

vector<Entity*> Room::getStuff()
{
	return stuff;
}



void Room::loadFile(string fileName)
{
	fstream file;
	string word;

	file.open(fileName);
	if (!file)
	{
		cout << "the file was not found." << endl;
	}
	// set name
	getline(file, word);
	setName(word);
	// set description
	getline(file, word);
	setDescription(word);
	// add verbs
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		AddAction(word);
		word = file.get();
	}
	// add connection rooms
	word = file.get();
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		addConnectionRoom(word);
		word = file.get();
	}
	// add objects
	word = file.get();
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		Object* obj = new Object("Objects/" + word +".txt");
		addStuff(obj);
		word = file.get();
	}
	// add items
	word = file.get();
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		Item* iti = new Item("Items/" + word + ".txt");
		addStuff(iti);
		word = file.get();
	}
}

void Room::addConnectionRoom(string room)
{
	connectingRooms.push_back(room);
}

void Room::addStuff(Entity* st)
{
	stuff.push_back(st);
}


void Room::removeItem(int place)
{
	stuff.erase(stuff.begin() + place - 1);
}
