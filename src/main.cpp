#include <iostream>
#include <string>
#include "Player.h"
#include "utils.h"

using namespace std;

int main() {

	minimenu();

	cout << 
		"========================================\n"
		"     WELCOME TO THE DUNGEON QUEST RPG   \n"
		"========================================\n\n"
		"You are an adventurer exploring ancient dungeons for treasure.\n"
		"Defeat monsters, collect loot, grow stronger.\n"
		"Goal: Reach level 10 and defeat the final boss.\n"
		"========================================\n\n"
	;
	cout << "Enter Player Name to start playing.\n\n";
	string playerName;
	cin >> playerName;
	cout << endl;
	Player p1(playerName, 100, 1);

	p1.displayStats();


}