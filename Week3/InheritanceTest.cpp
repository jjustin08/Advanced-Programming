#include <iostream>
#include "Inheritance.h"
using namespace std;

const string disc[] = { "Game Developer", "Software Engineer", " Animator", "None"};

int main()
{
	Person* p = new Person("Justin Bennett");
	Student* s = new Student("Jane Doe", Discipline::GAME_DEVELOPER, p);
	Faculty* f = new Faculty("Bob Dole", Discipline::SOFTWARE_ENGINEER );
	TFaculty* t = new TFaculty("Lisa Simpson", Discipline::ANIMATOR, "Lord Commandor");

	// Init and print person

	cout << "Hello, " << p->getName() << endl;

	cout << "Hello, " << s->getName() << ". You are a " << disc[static_cast<int>(s->getMajor())] << endl;

	cout << "Hello, " << f->getName() << ". Your department is " << disc[static_cast<int>(f->getDepartment())] << endl;

	cout << "Hello, " << t->getName() << ". Your department is " << disc[static_cast<int>(t->getDepartment())] << endl;

	delete t;
	delete p;
	delete s;
	delete f;

	t = nullptr;
	p = nullptr;
	s = nullptr;
	f = nullptr;

	return 0;
}