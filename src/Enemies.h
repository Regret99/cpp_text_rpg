#pragma once
#include "Character.h"

using namespace std;

class Enemies : public Character {
private:
	string type;

public:
	Enemies(string n, int h, string t) : Character(n, h), type(t) {}

	void roar();
};