#ifndef __COORDS
#define __COORDS
#include <cmath>
#include <iostream>
using namespace std;

class Coords
{
public:
	Coords(int x, int y);
	~Coords();

	int getx();
	int gety();
	friend ostream& operator<<(ostream& os, const Coords& coords);

private:
	int _x;
	int _y;
};
#endif