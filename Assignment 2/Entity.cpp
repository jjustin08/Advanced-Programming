#include "Entity.h"
#include <fstream>

Entity::Entity()
{
}

Entity::Entity(string file)
{
	loadFile(file);
}

Entity::~Entity()
{
}

void Entity::addStuff(Entity* st)
{
	stuff.push_back(st);
}

void Entity::removeItem(int place)
{
	stuff.erase(stuff.begin() + place - 1);
}

void Entity::loadFile(string fileName)
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

void Entity::command(string com)
{
	if (com == "sit")
	{
		Sit();
	}
	else if (com == "open")
	{
		Open();
	}
	else if (com == "close")
	{
		Close();
	}
	else if (com == "take")
	{
		Take();
	}
	else if (com == "use")
	{
		Use();
	}
	else if (com == "break")
	{
		Break();
	}
	else if (com == "drink")
	{
		Drink();
	}
	else if (com == "throw")
	{
		Throw();
	}

}

void Entity::Open()
{
	cout << "You open " << getName() << ".\n";
}

void Entity::Close()
{
	cout << "You close " << getName() << ".\n";
}

void Entity::Go()
{
	cout << "You go " << getName() << ".\n";
}


void Entity::Use()
{
	cout << "You use " << getName() << ".\n";
}

void Entity::Attack()
{
}

void Entity::Take()
{
	cout << "You take the " << getName() << ".\n";
}

void Entity::Throw()
{
	cout << "You throw " << getName() << ".\n";
}

void Entity::Break()
{
	cout << "You break " << getName() << ".\n";
}

void Entity::Drink()
{
	cout << "You drink " << getName() << ".\n";
}

void Entity::Sit()
{
	cout << "You sit on the " << getName() << ".\n";
}
