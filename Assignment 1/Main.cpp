#include <iostream>
#include <fstream>
#include <string>
#include "AnimationFrame.h"
#include "Creatures.h"
using namespace std;

int main()
{
	// create all creatures
	Cat Leo;
    Snail Slime;
    Snake Snake;
    Duck Quak;
    Rocket Ship;
    Truck car;

	// display creatues one after another
	Leo.animate();
    Slime.animate();
    Snake.animate();
    Quak.animate();
    Ship.animate();
    car.animate();

    
	return 0;
}