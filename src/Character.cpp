#include<iostream>
#include <string>
#include "Character.h"

using namespace std;

void Character::displayStats() {
	cout << "Name: " << name << " | Health: " << health << endl;
}