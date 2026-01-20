/* 
Start a new C++ Project in Visual Studio 2022 or another IDE of your choice.

Name this solution / project "GameOn3x"
Do not copy and paste. Instead, write by hand each line of the Game over 3.0 program.
This is important.

Test and see if it compiles and runs.
If it does not, welcome to debugging.Debug and fix it until it runs.The issue is probably a typo.Try to find the problem first, then please see me if you need help with this.

Please write a comment line in your own words above each line of C++ code that tells what it does and shows you understand it.

Combine the using std::cout, and using std::endl; into one using directive.

Change the output from "Game over!" to "Game on!"

Test and see if it compiles and runs again.Debug if needed.
Take a screenshot of your program running.
*/

// Game Over 3.0
// Demonstrates using declarations

#include <iostream> // include the iostream library for input and output
using std::cout;
using std::endl; // using declarations for cout and endl

int main() // main function - execution starts here
{
	cout << "Game Over!" << endl; // output "Game Over!" followed by a new line
	// the << endl inserts a newline character and flushes the output buffer
	return 0; // return 0 to indicate successful completion
}