// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "------------------------------------------------------------\n";
	cout << "----------------- Welcome to My Calculator -----------------\n";
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "------------------------------------------------------------\n";
	// cout << "The numbers you are given are 20 and 10 (in that order)!" << endl;
	int choice;
	int a;
	int b;
	cout << "Enter Your Choice (1-4): " << endl;
	cin >> choice;
	cout << "------------------------------------------------------------\n";
	cout << "Choose Your First Number: " << endl;
	cin >> a;
	cout << "------------------------------------------------------------\n";
	cout << "Choose Your Second Number: " << endl;
	cin >> b;
	cout << "------------------------------------------------------------\n";
	// int a = 20, b = 10;
	switch (choice)
	{
	case 1:
		cout << "Addition Output: " << a + b << endl;
		break;
	case 2:
		cout << "Subtraction Output: " << a - b << endl;
		break;
	case 3:
		cout << "Multiplication Output: " << a * b << endl;
		break;
	case 4:
		cout << "Division Output: " << a / b << endl;
		break;
	default:
		cout << "Invalid Choice! Start Over." << endl;
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
