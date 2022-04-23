#include "Object.h"
#include <fstream>
#include "Item.h"

Object::Object(string fileName, Engine* eng)
{
	setEngine(eng);
	loadFile(fileName);
}

Object::~Object()
{
}


void Object::loadFile(string fileName)
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
	// add items
	word = file.get();
	word = file.get();
	while (word != "@")
	{
		file.unget();
		getline(file, word, ',');
		Item* iti = new Item("Items/" + word + ".txt",getEngine());
		addStuff(iti);
		word = file.get();
	}
}
