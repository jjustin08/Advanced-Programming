#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;
using namespace std::literals::chrono_literals;
class Worm 
{
private:
	int location;
public:
	Worm();
	Worm(int location);
	void move();
	void display();
};