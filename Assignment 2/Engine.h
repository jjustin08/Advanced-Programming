#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Engine
{
private:
	string name;


public:
	//constructor
	Engine();
	~Engine();
	//getter
	string getName() { return name; }

	//setter
	void setName(string name) { this->name = name; }

	// public member functions
	void start();
	void playerInput();
	void cycle();

};