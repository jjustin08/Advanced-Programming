#include "Room.h"
#include <fstream>

Room::Room(string fileName)
{
	loadFile(fileName);
}

Room::~Room()
{
}

vector<Room*> Room::getRooms()
{
	return connectingRooms;
}

vector<Object*> Room::getObjects()
{
	return objects;
}

vector<Item*> Room::getItems()
{
	return items;
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
		Room* room = new Room("Rooms/"+word);
		addConnectionRoom(room);
		word = file.get();
	}
	// add objects
	word = file.get();
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		Object* obj = new Object("Objects/" + word);
		addObject(obj);
		word = file.get();
	}
	// add items
	word = file.get();
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		Item* iti = new Item("Items/" + word);
		addItem(iti);
		word = file.get();
	}
}

void Room::addConnectionRoom(Room* room)
{
	connectingRooms.push_back(room);
}

void Room::addObject(Object* obj)
{
	objects.push_back(obj);
}

void Room::addItem(Item* i)
{
	items.push_back(i);
}

void Room::removeItem(int place)
{
	items.erase(items.begin() + place - 1);
}
