#pragma once
#include <iostream>
#include <string>
using namespace std;

class AnimationFrame
{
private:
	string line, fileName;
public:
	AnimationFrame(string fileName);
	~AnimationFrame();
	void move(int location);
	void getFrame(int location);
	
};