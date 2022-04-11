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
	if (worked)
	{
		if (com1 == "go")
		{
			for (auto door : room->getRooms())
			{
				if (com2 == door)
				{
					room = new Room("Rooms/" +door+ ".txt");
				}
			}
		}
		// do command
		for (auto stuff : room->getStuff())
		{
			if (stuff->getName() == com2)
			{
				stuff->command(com1);
			}
		}
	}
}

void Engine::cycle()
{
	system("cls");
	availableCommands.clear();
	// interface
	cout << "Available commands:" << endl;
	cout << "---------------------" << endl;
	loadEntities();
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

	system("pause");
	cycle();
}

void Engine::loadEntities()
{
	// put inventor stuff here later
	for (auto stuff : room->getStuff())
	{
		for (auto action : stuff->getActions())
		{
			availableCommands.push_back(action + " " + stuff->getName());
			cout << availableCommands.back() << endl;
		}
	}
	for (auto door : room->getRooms())
	{
		availableCommands.push_back("go "+ door);
		cout << availableCommands.back() << endl;
	}
}

void Engine::constructWorld()
{
	player = new Player();
	story = new Story();
	room = new Room("Rooms/StartRoom.txt");
}
