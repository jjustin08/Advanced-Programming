#include "Engine.h"


Engine::Engine() : name("BOB")
{

	start();
}

Engine::~Engine()
{
}

void Engine::start()
{
	cout << "Hello welcome\nEnter your name: ";
	string s;
	cin >> s;
	setName(s);

	cycle();
}

void Engine::playerInput()
{
	string com1, com2;

	cin >> com1 >> com2;
	// try and catch if input is valid
}

void Engine::cycle()
{
	system("cls");




	playerInput();
	cycle();
}
