#include <iostream>
#include "Player.h"

using namespace std;

void Player::levelUp() {
	level++;
	cout << name << " leveled up! Level: " << level << endl;
}