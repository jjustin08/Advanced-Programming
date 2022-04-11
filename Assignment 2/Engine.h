#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "Player.h"
#include "Story.h"
#include "Room.h"
#include "Entity.h"
using namespace std;

class Engine
{
private:
	Player* player;
	Story* story;
	Room* room;
	vector<string> availableCommands;
public:
	//constructor
	Engine();
	~Engine();
	//getter


	//setter

	

	// public member functions
	void start();
	void playerInput();
	void cycle();
	void loadEntities();
	void constructWorld();

};