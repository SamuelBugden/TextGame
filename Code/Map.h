#ifndef __MAP
#define __MAP
#include "Coords.h"
#include "Locations.h"
#include <vector> 
using namespace std;

class WorldMap{
public:
	WorldMap(double seed, int alpha);
	WorldMap();
	~WorldMap();
private:
	double _WorldSeed;
	int _alpha, _x, _y;
	vector<Locations> locations;

};
#endif