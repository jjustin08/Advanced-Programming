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
			bool roomChose = false;
			for (int i = 0; visitiedRooms.findNode(i) != nullptr; i++)
			{
				if (visitiedRooms.findNode(i)->getName() == com2)
				{
					room = visitiedRooms.findNode(i);
					roomChose = true;
					continue;
				}
			}
			if (!roomChose)
			{
				for (auto door : room->getRooms())
				{
					if (com2 == door)
					{
						visitiedRooms.add(new Room("Rooms/" + door + ".txt"));
						roomNum.push_back(roomNum[roomNum.size() - 1] +1);
						room = visitiedRooms.findNode(roomNum.size() -1);
					}
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
					// if hiden item in object
					for (int x = 0; x < room->getStuff()[i]->getStuff().size(); x++)
					{
						room->addStuff(room->getStuff()[i]->getStuff()[x]);
						room->getStuff()[i]->removeItem(x+1);
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
	try
	{
		cout << "Enter command:" << endl;

		playerInput();
		cout << "---------------------" << endl;
	}
	catch (string ex)
	{
		cout << ex;
	}

	// pause then repeat function
	system("pause");
	cycle();
}

void Engine::loadEntities()
{
	// inventory
	if(player->getInventory().size() > 0)
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
	visitiedRooms.add(new Room("Rooms/Lobby.txt"));
	room = visitiedRooms.findNode(0);
	roomNum.push_back(0);
	//room = new Room("Rooms/Lobby.txt");
}
