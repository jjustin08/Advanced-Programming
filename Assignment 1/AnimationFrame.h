#pragma once
#include <iostream>
#include <string>
using namespace std;

class AnimationFrame
{
private:
	string  fileName, line;
	string frame[9];
public:
	AnimationFrame();
	AnimationFrame(string fileName);
	~AnimationFrame();
	string* getFrame(string fileName);
	
};