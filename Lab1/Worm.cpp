#include "..\Assignment 1\Creatures.h"
#include <iostream>
#include "Worm.h"

Worm::Worm()
{
	location = 10;
}

Worm::~Worm()
{
}

Worm::Worm(int location)
{
	this->location = location;
}

void Worm::move()
{
	for (int x = 0; x < location; x++)
	{
		cout << " ";
	}
}

void Worm::display()
{
	while (true) {
		for (int i = 0; i < 45; i++)
		{
			move();
			cout << "         \\/" << endl;
			move();
			cout << "         00" << endl;
			move();
			cout << "~0000000000" << endl;
			std::this_thread::sleep_for(1s);
			system("cls");
			move();
			cout << "         \\/" << endl;
			move();
			cout << "     0   00" << endl;
			move();
			cout << "~0000 00000" << endl;
			std::this_thread::sleep_for(1s);
			system("cls");
			move();
			cout << "         \\/" << endl;
			move();
			cout << "    000  00" << endl;
			move();
			cout << "~000   0000" << endl;
			std::this_thread::sleep_for(1s);
			system("cls");
			++location;
			++location;
			move();
			cout << "         \\/" << endl;
			move();
			cout << "     0   00" << endl;
			move();
			cout << "~0000 00000" << endl;
			std::this_thread::sleep_for(1s);
			system("cls");
			++location;
		}
		location = 0;
	}
}
