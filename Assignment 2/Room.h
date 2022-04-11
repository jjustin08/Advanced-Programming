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
	vector<Entity*> stuff;
public:
	Room(string fileName);
	~Room();
	// getters
	vector<string> getRooms();
	vector<Entity*> getStuff();

	// file loading
	void loadFile(string fileName);
	void addConnectionRoom(string);
	void addStuff(Entity*);
	void removeItem(int place);
};

