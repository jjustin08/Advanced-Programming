#include "Engine.h"


Engine::Engine()
{
	start();
}

Engine::~Engine(){}

void Engine::start()
{
	constructWorld();
	story->read();
	system("pause");
	system("cls");
	cycle();
}

void Engine::playerInput()
{
	// input
	string com1, com2;
	bool worked = false;
	cin >> com1 >> com2;
	// clear screen
	system("cls");
	cout << "---------------------" << endl;
	// check if command is available
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
		// go to new room
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
		// inventory commands
		for (int i = 0; i < player->getInventory().size(); i++)
		{
			if (player->getInventory()[i]->getName() == com2)
			{
				if (com1 == "examine")
				{
					player->getInventory()[i]->examine();
				}
				else
				{
					player->getInventory()[i]->command(com1);
				}
			}
		}
		// room commands command
		for (int i = 0 ; i < room->getStuff().size(); i++)
		{
			if (room->getStuff()[i]->getName() == com2)
			{
				if (com1 == "examine")
				{
					room->getStuff()[i]->examine();
					if (room->getStuff()[i]->getStuff().size() > 0)
					{
						for (auto item : room->getStuff()[i]->getStuff())
						{
							room->addStuff(item);
						}
						room->getStuff()[i]->getStuff().clear();
					}
				}
				else if (com1 == "take")
				{
					
					player->addItem(static_cast<Item*>(room->getStuff()[i]));
					room->getStuff()[i]->command(com1);
					room->removeItem(i+1);
				}
				else 
				{
					room->getStuff()[i]->command(com1);
				}
				
			}
		}
	}
}

void Engine::cycle()
{
	// clear system
	availableCommands.clear();
	// interface
	cout << "---------------------" << endl;
	room->examine();
	cout << "---------------------" << endl;
	cout << "\nAvailable commands:" << endl;
	cout << "---------------------" << endl;
	loadEntities();
	cout << "---------------------" << endl;
	
	// input
	bool cont = false;
	while (!cont)
	{
		cont = true;
		try
		{
			cout << "Enter command:" << endl;

			playerInput();
			cout << "---------------------" << endl;
		}
		catch (string ex)
		{
			cout << ex;
			cont = false;
		}
	}

	// pause then repeat function
	system("pause");
	cycle();
}

void Engine::loadEntities()
{
	// inventory
	if(player->getInventory().size() >0)
	cout << "-----Inventory-----\n";
	for (auto item : player->getInventory())
	{
		// examine commands
		availableCommands.push_back("examine " + item->getName());
		cout << availableCommands.back() << endl;
		// actions
		for (auto action : item->getActions())
		{
			if (action != "take")
			{
				availableCommands.push_back(action + " " + item->getName());
				cout << availableCommands.back() << endl;
			}
		}
	}
	// entities in room
	cout << "-----Room-----\n";
	for (auto stuff : room->getStuff())
	{
		// examine commands
		availableCommands.push_back("examine " + stuff->getName());
		cout << availableCommands.back() << endl;
		// actions for each entity
		for (auto action : stuff->getActions())
		{
			availableCommands.push_back(action + " " + stuff->getName());
			cout << availableCommands.back() << endl;
		}
	}
	// Connecting rooms
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
	room = new Room("Rooms/Lobby.txt");
}
