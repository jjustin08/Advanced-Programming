#include <iostream>
#include <fstream>
#include <string>
#include "AnimationFrame.h"
#include "Creatures.h"
using namespace std;

int main()
{
	// create all creatures
	Creature worm;

	// display creatues one after another
	worm.animate();
		

	return 0;
}