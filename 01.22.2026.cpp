// 01.22.2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//commemts: Carmen Amond 01.22.26
//i/o statments
//if statments

#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to C++ Tutorial" << endl;
	string fname, lname, major; //"first name", "last name"
	int age;
	cout << "Please enter your first name: ";
	cin >> fname;
	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "Please enter your age: ";
	cin >> age;
	cout << "Please enter your major: ";
	cin >> major;
	cout << "Your first name is: " << fname << ", and your last name is: " << lname <<
		". You are: " << age << "years old. And majoring in: " << major << endl;
	return 0;
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
