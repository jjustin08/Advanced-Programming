#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "Player.h"
#include "Story.h"
using namespace std;

class Engine
{
private:
	Player* player;
	Story* story;
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
	void constructWorld();

};