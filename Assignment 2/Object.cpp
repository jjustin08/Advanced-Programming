#include "Object.h"
#include <fstream>

Object::Object(string fileName)
{
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
}