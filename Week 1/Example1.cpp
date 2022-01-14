#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
	// Constructors
	Circle() // Default constructor
	{
		radius = 10;
	}
	Circle(double r)
	{
		radius = r;
	}

	// Behaviours (aka functions)
	void setRadius(double);
	double getRadius() { return radius; }
	double calcArea()
	{
		// Area of circle is PI*r^2
		return 3.14 * pow(radius, 2);
	}
	// Properties (aka Variables)
private:
	double radius;

};

void Circle::setRadius(double r)
{
		if (r > 0)
		{
			radius = r;
		}
		else
		{
			cout << "Please provide a positive number!";
		}
}


//int main()
//{
//	Circle circle1, circle2(2.5);
//
//	circle1.setRadius(1);
//	circle2.setRadius(2.5);
//
//	// Print out the area
//	cout << "The area of circle 1 is " << circle1.calcArea() << endl;
//	cout << "The area of circle 2 is " << circle2.calcArea() << endl;
//
//	return 0;
//}