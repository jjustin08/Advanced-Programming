#include <iostream>
using namespace std;

class Shape // abstract class. Requires a min of 1 pure virtual function
{
private:
	string name;
public:
	Shape()
	{
		setName("");
	}
	Shape(string name)
	{
		setName(name);
	}
	virtual void draw() const = 0; // Pure virtual function
	void setName(string name)
	{
	this->name = name;
	}
	string getName() const
	{
		return name;
	}
};

class Triangle : public Shape
{
public:
	Triangle() : Shape() { }
	Triangle(string name): Shape(name) { }

	void draw() const
	{
		cout << "  ^\n";
		cout << " / \\\n";
		cout << "/___\\\n\n";
	}
};

class Circle : public Shape
{
public:
	Circle() : Shape() {}
	Circle(string name) : Shape(name) { }

	void draw() const
	{
		cout << "()";
	}

};

class Oval : public Circle
{
public:
	Oval() : Circle(){}
	Oval(string name) : Circle(name) {}
	void draw() const
	{
		cout << "(=)";
	}


};

int main()
{
	const int SHAPE_COUNT = 3;

	Shape* arr[SHAPE_COUNT] =
	{
	 new Triangle(),
	 new Circle(),
	 new Oval(),
	};

	for (int i = 0; i < SHAPE_COUNT; i++)
	{
		arr[i]->draw();
	}
	
	return 0;
}