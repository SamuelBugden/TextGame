#include "Map.h"
#include "Player.h"



using namespace std;

int main() {
	
	WorldMap Alir(53465, 1);

	cout << "What is your name, adventurer? :";
	string name;
	cin >> name;
	Player player (name, Alir);
	cout << "Welcome " << name << " to the world of Alir. Your fate is in your hands. \nGood Luck!" << endl;


}