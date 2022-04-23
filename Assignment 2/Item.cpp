#include "Item.h"
#include <fstream>
#include "Engine.h"

Item::Item(string fileName, Engine* eng) : key(false) 
{
	loadFile(fileName);
	setEngine(eng);
}

Item::~Item()
{

}

void Item::loadFile(string fileName)
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
	// add key stuff
	word = file.get();
	while (word != "@")
	{
		key = true;
		file.unget();
		getline(file, word, ',');
		rooms[0] = word;
		getline(file, word, ',');
		rooms[1] = word;
		word = file.get();
	}

}

void Item::Use()
{
	// if item is key
	if (key)
	{
		std::cout << "You try and use " << getName() << ".\n";
		// check if they are in the right room
		if (getEngine()->getCurrentRoom()->getName().compare(rooms[0]))
		{
			std::cout << "the " << getName() << " worked.\n";
			getEngine()->getCurrentRoom()->addConnectionRoom(rooms[1]);
		}
		else
		{
			std::cout << "You failed to use " << getName() << ".\n";
		}
	}
}




