#include "Player.h"

Player::Player(string name, WorldMap map)
{
	_name = name;
	_map = map;
}

Player::~Player()
{
}

string Player::GetName() 
{
	return this->_name;
}


