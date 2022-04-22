#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Item.h"
using namespace std;
class Player
{
private:
	string m_name;
	vector<Item*> m_inventory;
public:
	//getter
	string getName() { return m_name; }

	//setter
	void setName(string name) { this->m_name = name; }


	// inventory
	void addItem(Item* i) { m_inventory.push_back(i); }
	void removeItem(int i) { m_inventory.erase(m_inventory.begin() + i -1); }
	vector<Item*> getInventory() { return m_inventory; }
};

