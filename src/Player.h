#pragma once
#include<string>
#include "Character.h"

class Player : public Character {
private:
	int level;
	int experience = 0;

public:
	Player(string n, int h, int lvl) : Character(n, h), level(lvl) {}

	void levelUp();
	void expUp(int exp);

};