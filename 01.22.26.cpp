// 01.22.26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//commemts: Carmen Amond 01.22.26
//i/o statments
// if statments

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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
