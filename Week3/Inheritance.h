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
		cout << "Person constructo Called!" << endl;
		setName("");
	}
	Person(const string& name)
	{
		setName(name);
	}
	~Person()
	{
		cout << "person destrucot called" << endl;
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

class Student : public Person
{
private:
	Discipline major;
	Person* advisor;
public:
	Student()
	{
		cout << " Student Constructor Called" << endl;
	}
	~Student()
	{
		cout << "student destructor called" << endl;
	}
	void setMajor(Discipline major)
	{
		this->major = major;
	}
	Discipline getMajor()
	{
		return major;
	}
	void setAdvisor(Person* advisor)
	{
		this->advisor = advisor;
	}
	Person* getAdvisor()
	{
		return advisor;
	}

};

class Faculty : public Person
{
private:
	Discipline department;
public:
	Faculty() 
	{
		cout << "Faculty contructor called " << endl;
	}
	~Faculty() 
	{
		cout << "faculty destructor called" << endl;
	}
	void setDepartment(Discipline department)
	{
		this->department = department;
	}
	Discipline getDepartment()
	{
		return department;
	}
};