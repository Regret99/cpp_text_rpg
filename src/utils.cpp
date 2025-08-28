#include "utils.h"
#include <iostream>
#include <boost/lexical_cast.hpp>
#include <string>


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

int int_to_string(string string_in)
{
    int i = 0;
    try {
        i = boost::lexical_cast<int>(string_in);
    } catch (...) {
        return -1; // Returns -1 if exception raised
    }
    return i;
}

int int_option(int max_digit)
{
    string prompt = "Enter a value between 1 and " + to_string(max_digit) + ": ";
    // print(prompt, "blue", false);
	cout<<prompt<<endl;

    if (cin.peek() == '\n')
        cin.ignore();

    bool valid_in = false;
    string stringIn = "-1";
    int answer;
    while (!valid_in) {
        getline(cin, stringIn);
        if (stringIn.length() == 1) {
            answer = int_to_string(stringIn);
        }
        if (answer > 0 && answer <= max_digit) {
            valid_in = true;
        } else {
            // print("Invalid option. Try again...", "red");
            // print(prompt, "blue", false);
			cout << "Invalid option. Try again..." << endl;
			cout << prompt << endl;
        }
    }
    return answer;
}