#pragma once
#include "Entity.h"
#include <iostream>
#include <string>
using namespace std;
class Item : public Entity
{
private:

public:
	Item(string fileName);
	~Item();

};

