#pragma once
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "AnimationFrame.h"
using namespace std;
using namespace std::literals::chrono_literals;
class Creature
{
private:
	int m_location;
	string m_fileName;
	string m_frame[9];
	AnimationFrame* m_ani;
public:
	Creature();
	Creature(int location, string fileName);
	~Creature();
	void loadFrames();
	int getLocation();
	void setLocation(int location);
	string getFileName();
	void setFileName(string fileName);
	void move();
	void animate();
};

class Dragon : public Creature
{
public:
	Dragon();
	~Dragon();


};