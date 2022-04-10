#pragma once
#include <iostream>
#include <string>
#include "Entity.h"
#include "Objects.h"
#include "Item.h"
using namespace std;
class Room : public Entity
{
private:
	vector<Room*> connectingRooms;
	vector<Objects*> objects;
	vector<Item*> items;
public:
	Room();
	~Room();
	void loadFile(string fileName);

};

