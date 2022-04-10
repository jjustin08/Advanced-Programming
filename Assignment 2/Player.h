#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Item.h"
using namespace std;
class Player
{
private:
	string name;
	vector<Item*> inventory;
public:
	//getter
	string getName() { return name; }

	//setter
	void setName(string name) { this->name = name; }


	// inventory
	void addItem(Item* i) { inventory.push_back(i); }
	void removeItem(int i) { inventory.erase(inventory.begin() + i -1); }
};

