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
	vector<Room*> connectingRooms;
	vector<Entity*> stuff;
public:
	Room(string fileName);
	~Room();
	// getters
	vector<Room*> getRooms();
	vector<Entity*> getStuff();

	// file loading
	void loadFile(string fileName);
	void addConnectionRoom(Room*);
	void addStuff(Entity*);
	void removeItem(int place);
};

