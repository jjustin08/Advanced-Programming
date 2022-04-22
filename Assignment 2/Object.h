#pragma once
#include "Entity.h"
#include <iostream>
#include <string>
using namespace std;
class Object : public Entity
{
private:

public:
	Object(string fileName);
	~Object();

	vector<Entity*> getStuff();


	void loadFile(string fileName);
};

