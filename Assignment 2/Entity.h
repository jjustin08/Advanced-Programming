#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Entity
{
private:
	string name;
	string description;
	vector<string> actions;
public:
	// constructor
	Entity(string file);
	~Entity();

	// getters
	string getName() { return name; }
	string getDescription() { return description; }
	vector<string> getActions() { return actions; }

	// setters
	void setName(string name) { this->name = name; }
	void setDescription(string des) { this->description = des; }
	void AddAction(string act) { actions.push_back(act); }

	// public member functions
	virtual void loadFile(string file);
	// virtual action functions
	// add more when needed
	virtual void examine() {}
	virtual void Open() {}
	virtual void Close() {}
	virtual void Go() {}
	virtual void Take() {}
	virtual void Use() {}
	virtual void Attack() {}

};