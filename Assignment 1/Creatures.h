#pragma once
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;
using namespace std::literals::chrono_literals;
class Creature
{
private:
	int location;
	string fileName;
public:
	Creature();
	Creature(int location);
	~Creature();
	int getLocation();
	void setLocation(int location);
	string getFileName();
	void setFileName(string fileName);
	void animate();
};

class Dragon : public Creature
{
public:
	Dragon();
	~Dragon();


};