#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Discipline {GAME_DEVELOPER, SOFTWARE_ENGINEER, ANIMATOR};
enum class Classification {FRESHMAN, SOPHMORE, JUNIOR, SENIOR};

// base class
class Person
{
private:
	string name;


public:
	Person()
	{
		setName("");
	}
	Person(const string& name)
	{
		setName(name);
	}
	void setName(const string& name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}


};