#include <iostream>
#include "Player.h"

using namespace std;

void Player::levelUp() {
	level++;
	cout << name << " leveled up! Level: " << level << endl;
}
void Player::expUp(int exp) {
	experience += exp;
	if(experience > 100){
		experience -= 100;
		levelUp();
	}
	cout << "Your current exp is " << experience << "/100";
}