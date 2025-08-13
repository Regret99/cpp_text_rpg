#pragma once
#include <string>

// Main classes you'll create:
//class Character {}
//class Player : public Character {}
//class Monster : public Character {}
//class Item {}
//class Game {}
using namespace std;

class Character
{
	protected:
		string name;
		int health, maxhealth;
		int attack, defence;
	public:
		//Character(const string& n, int h, int hm, int a, int d) : name(n), health(h), maxhealth(hm), attack(a), defence(d) {}
		Character(const string& n, int h) : name(n), health(h) {}

		void displayStats();
};

