#include "Coords.h"

Coords::Coords(int x, int y)
{
	_x = x;
	_y = y;
}

Coords::~Coords()
{
}

int Coords::getx()
{
	return this->_x;
}

int Coords::gety()
{
	return this->_y;
}

ostream& operator<<(ostream& os, const Coords& coords)
{
	os << "x Coordinate: " << coords._x << " --  y Coordinate: " << coords._y;
	return os;
}