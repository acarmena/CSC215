// Class 2 01.20.26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// comments
// Today is going to be our first day of learning C++
// Our first project!

#include <iostream>

using namespace std; //to do multiple using statements in one line
int main()
{
	cout << "Hello World!\n"; //I deleted the std:: before cout and endl because of the using namespace std statement
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

//pt2. of class
// Class 2 01.20.26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// comments
// Today is going to be our first day of learning C++
// Our first project!

#include <iostream>

using namespace std; //to do multiple using statements in one line
int main()
{
	//Data Types
		// int - whole numbers, positive and negative, no decimals or fractions
		int x = 100;
		// double - decimal numbers, positive and negative, numbers with fractions
		double gpa = 3.7;
		// char - single characters, letters, numbers, symbols, must be in single quotes ''
		char grade = 'A';
		// boolean - true or false values
		bool isStudent = true;
		// string - a sequence of characters, words, sentences, must include the string library
		string name = "John Doe";

	cout << "The value of x = " << x << endl; //I deleted the std:: before cout and endl because of the using namespace std statement
	cout << "The value of gpa = " << gpa << endl;
	cout << "The value of grade = " << grade << endl;
	cout << "Is student? " << isStudent << endl;
	cout << "The name is " << name << endl;
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
