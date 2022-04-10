#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Story
{
private:
	string para;
	fstream file;
public:
	Story();
	~Story();
	void read();
	void loadStory();
};

