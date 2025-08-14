#include "utils.h"
#include <iostream>


using namespace std;

void mainMenu(){
	cout << 
		"=== DUNGEON QUEST ==="
		"1. Start New Game"
		"2. Load Game  "
		"3. View Stats"
		"4. Quit Game"

		"Enter your choice (1-4): _";
	cout << endl;
}

void inGameMenu() {
	cout << 
	"=== What would you like to do? ==="
	"Health: 85/100    Level: 3    XP: 150/300"

	"1. Explore Dungeon"
	"2. View Inventory"
	"3. Use Item"
	"4. Rest (Restore Health)"
	"5. Save Game"
	"6. Quit to Main Menu"

	"Enter your choice (1-6): _";

	cout << endl;

}

void minimenu() {
	cout << "This is a menu.\n";


}