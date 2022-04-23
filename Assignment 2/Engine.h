#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "Player.h"
#include "Story.h"
#include "Room.h"
#include "Entity.h"
#include "LinkedList.h"
using namespace std;

class Engine
{
private:
	Player* player;
	Story* story;
	Room* room;
	LinkedList<Room*> visitiedRooms;
	vector<string> availableCommands;
	vector<int> roomNum;
public:
	//constructor
	Engine();
	~Engine();

	// public member functions
	void start();
	void playerInput();
	void cycle();
	void loadEntities();
	void constructWorld();

};