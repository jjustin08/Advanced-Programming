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

class Cat : public Creature
{
public:
	Cat();
	~Cat();
};

class Snail : public Creature
{
public:
	Snail();
	~Snail();
};

class Snake : public Creature
{
public:
	Snake();
	~Snake();
};

class Duck : public Creature
{
public:
	Duck();
	~Duck();
};

class Rocket : public Creature
{
public:
	Rocket();
	~Rocket();
};

class Truck : public Creature
{
public:
	Truck();
	~Truck();
};