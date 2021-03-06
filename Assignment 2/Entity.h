#pragma once
#include <iostream>
#include <string>
#include <vector>

class Engine;

using namespace std;

class Entity
{
private:
	string name;
	string description;
	vector<string> actions;
	vector<Entity*> stuff;
	Engine* m_engine;
public:
	// constructor
	Entity();
	Entity(string file,Engine* eng);
	~Entity();

	// getters
	string getName() { return name; }
	string getDescription() { return description; }
	vector<string> getActions() { return actions; }
	vector<Entity*> getStuff() { return stuff; }
	Engine* getEngine() { return m_engine; }

	// setters
	void setName(string name) { this->name = name; }
	void setDescription(string des) { this->description = des; }
	void AddAction(string act) { actions.push_back(act); }
	void addStuff(Entity*);
	void removeItem(int place);
	void setEngine(Engine* eng);

	// public member functions
	virtual void loadFile(string fileName);
	// virtual action functions
	// add more when needed
	void command(string com);
	void examine() { cout << description << endl; }
	virtual void Open();
	virtual void Close();
	virtual void Go();
	virtual void Use();
	virtual void Attack();
	virtual void Take();
	virtual void Throw();
	virtual void Break();
	virtual void Drink();
	virtual void Sit();

};