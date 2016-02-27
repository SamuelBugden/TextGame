#ifndef __PLAYER
#define __PLAYER
#include "Map.h"
#include <string>
using namespace std;

class Player
{
public:
	Player(string name, WorldMap map);
	~Player();

	string GetName();

private:
	string _name;
	WorldMap _map;
};


#endif