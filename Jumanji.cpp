// Jumanji.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// this is a text adventure game. Based in the Jungle.
// the user will be promoted to enter a few pieces of information about themselves.
// they will make a choice to choose how they want to proceed in the game.

#include <iostream>
using namespace std;
int main()
{
	string characters[4] = { "1. Dr. Smolder Bravestone", "2. Franklin. Mouse Finbar", "3. Ruby Roundhouse", "4. Professor Sheldon Oberon" };
	cout << "Welcome to the Jungle!" << endl;
	cout << "Okay! Here are the choices: ";
	for (string character : characters) {
		cout << character << endl;
	}
	cout << "Please enter a number (1-4) to select your character: ";
	int choice;
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
		break;
	}
	return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
