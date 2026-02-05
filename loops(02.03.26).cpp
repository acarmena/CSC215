// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Loops & Switch Statements

#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i <= 100; i = i + 2) {
		// even numbers from 0-100|
		cout << i << " ";
	}

	for (int i = 1; i <= 100; i = i + 2) {
		// odd numbers from 0-100|
		cout << i << " ";
	}

	//while loop to count down from 10
	int num = 10;
	while (num > 0) {
		cout << num << " ";
		num--;
	}

	//do while loop
	int num2 = 10;
	do {
		cout << num2 << " ";
		num2--; // num2 = num2 - 1
	} while (num2 >= 1);
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
