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
	vector<Object*> objects;
	vector<Item*> items;
public:
	Room(string fileName);
	~Room();
	// getters
	vector<Room*> getRooms();
	vector<Object*> getObjects();
	vector<Item*> getItems();

	// file loading
	void loadFile(string fileName);
	void addConnectionRoom(Room*);
	void addObject(Object*);
	void addItem(Item*);
	void removeItem(int place);
};

