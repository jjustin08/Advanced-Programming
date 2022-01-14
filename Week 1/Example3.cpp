#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//Constuctor
	Person()
	{
		name = "DEFAULT";
		age = 1;
	}
	Person(string n)
	{
		name = n;
		age = 1;
	}
	Person(int a)
	{
		name = "DEFAULT";
		age = a;
	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	Person(string n = "DEFAULT", int a = 1)
	{
		name = n;
		age = a;
	}
	//Functions
	string getName() { return name; }
	void setName(string n) { name = n; }

	int getAge() { return age; }
	void setAge(int a) { age = a; }

private:
	//Variables
	string name;
	int age;
};

struct Rectangle
{
	int width, height;
};

int main()
{
	Rectangle* pRect = nullptr;
	Person* pPerson = nullptr;

	Rectangle rect; //instance of rectangle struct
	pRect = &rect;

	(*pRect).width = 10;
	pRect->height = 20; // Preferred way to derefence a pointer to an object

	cout << "Area of the rectangle is : " << pRect->width * pRect->height << endl;

	//Dynamically allocate object through the pointer!
	pRect = new Rectangle;
	pRect->width = 6;
	pRect->height = 5;
	cout << "Area of the rectangle is : " << pRect->width * pRect->height << endl;
	delete pRect;
	//must delete when using new
	pRect = nullptr;
	
	pPerson = new Person("Justin Bennett", 21);
	cout << pPerson->getName() << " is " << pPerson->getAge() << " years old" << endl;
	delete pPerson;
	pPerson = nullptr;

	

	return 0;
}