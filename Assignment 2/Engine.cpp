#include "Engine.h"


Engine::Engine()
{

	start();
}

Engine::~Engine()
{
}

void Engine::start()
{
	constructWorld();

	cout << "Hello welcome\nEnter your name: ";
	string s;
	cin >> s;
	player->setName(s);

	cycle();
}

void Engine::playerInput()
{
	string com1, com2;
	bool worked = false;
	cin >> com1 >> com2;
	for (auto command : availableCommands)
	{
		if (command == com1 + " " + com2)
		{
			worked = true;

		}
		

	}
	if (!worked)
	{
		string error = "Invalid command entered\n";
		throw error;
	}
}

void Engine::cycle()
{
	//system("cls");
	// interface
	cout << "Available commands:" << endl;
	cout << "---------------------" << endl;
	//objects in room
	for (auto obj : room->getObjects())
	{
		for (auto action : obj->getActions())
		{
			availableCommands.push_back(action+" "+obj->getName());
			cout << availableCommands.back() << endl;
		}
	}
	//items in room
	for (auto iti : room->getItems())
	{
		for (auto action : iti->getActions())
		{
			availableCommands.push_back(action + " " + iti->getName());
			cout << availableCommands.back() << endl;
		}
	}
	cout << "---------------------" << endl;
	
	bool cont = false;
	while (!cont)
	{
		cont = true;
		try
		{
			cout << "Enter command:" << endl;
			playerInput();
		}
		catch (string ex)
		{
			cout << ex;
			cont = false;
		}
	}

	cycle();
}

void Engine::constructWorld()
{
	player = new Player();
	story = new Story();
	room = new Room("Rooms/StartRoom.txt");
}
