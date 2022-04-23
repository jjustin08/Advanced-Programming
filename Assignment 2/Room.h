#pragma once
#include <iostream>
#include <string>
#include "Entity.h"
#include "Object.h"
#include "Item.h"
using namespace std;
class Room : public Entity
{
private:
	vector<string> connectingRooms;
public:
	Room(string fileName, Engine* eng);
	~Room();
	// getters
	vector<string> getRooms();

	// file loading
	void loadFile(string fileName);
	void addConnectionRoom(string);

};

