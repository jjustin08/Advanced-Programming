#pragma once
#include "Entity.h"
#include <iostream>
#include <string>
using namespace std;
class Item : public Entity
{
private:
	bool key;
	string rooms[2];
public:
	Item(string fileName, Engine* eng);
	~Item();

	void loadFile(string fileName);
	void Use() override;
};

