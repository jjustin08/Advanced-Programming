#include "Engine.h"


Engine::Engine()
{

	start();
}

Engine::~Engine()
{
}

void Engine::start()
{
	constructWorld();

	cout << "Hello welcome\nEnter your name: ";
	string s;
	cin >> s;
	player->setName(s);

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
	story->read();



	playerInput();
	cycle();
}

void Engine::constructWorld()
{
	player = new Player();
	story = new Story();
}
