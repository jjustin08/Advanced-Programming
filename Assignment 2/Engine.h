#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "Player.h"
#include "Story.h"
#include "Room.h"
#include "LinkedList.h"
#include "Entity.h"
using namespace std;


class Engine
{
private:
	Player* player;
	Story* story;
	Room* room;
	LinkedList<Room*> visitiedRooms;
	vector<string> availableCommands;
	int roomNum;
public:
	//constructor
	Engine();
	~Engine();
	//getters
	Room* getCurrentRoom() { return room; }
	//setters
	

	// public member functions
	void start();
	void playerInput();
	void cycle();
	void loadEntities();
	void constructWorld();

};