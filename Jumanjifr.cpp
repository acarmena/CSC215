// Jumanjifr.cpp : This file contains the 'main' function. Program execution begins and ends there
// this is a text adventure game. Based in the Jungle.
// the user will be promoted to enter a few pieces of information about themselves.
// they will make a choice to choose how they want to proceed in the game.

#include <iostream>
#include <string>
using namespace std;

void Character();

int main()
{
	Character();
	string choice2;
	cout << "Thank you for your choice! Would you like to choose again or end? (c/e): " << endl;
	cin >> choice2;
	while (choice2 == "c") {
		Character();

		cout << "Thank you for your choice! Would you like to choose again or end? (c/e): " << endl;
		cin >> choice2;
	}
	cout << "Thank you for playing! Goodbye!" << endl;
}

void Character() {
	string characters[4] = { "1. Dr. Smolder Bravestone",
		"2. Franklin. Mouse Finbar",
		"3. Ruby Roundhouse",
		"4. Professor Sheldon Oberon" };

	cout << "Welcome to the Jungle!" << endl;
	cout << "First piece, you need to decide who you want to be!" << endl;
	cout << "Okay! Here are the choices: \n";
	for (string character : characters) {
		cout << character << endl;
	}
	int choice;
	cout << "Please enter a number (1-4) to select your character: ";

	cin >> choice;
	switch (choice) {
	case 1:
		cout << "You have selected Dr. Smolder Bravestone!" << endl;
		cout << "You are strong and fearless!" << endl;
		break;
	case 2:
		cout << "You have selected Franklin Mouse Finbar!" << endl;
		cout << "You are clever and quick!" << endl;
		break;
	case 3:
		cout << "You have selected Ruby Roundhouse!" << endl;
		cout << "You are agile and deadly!" << endl;
		break;
	case 4:
		cout << "You have selected Professor Sheldon Oberon!" << endl;
		cout << "You are smart and resourceful!" << endl;
		break;
	default:
		cout << "Invalid choice. Please restart the game and select a valid character." << endl;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
