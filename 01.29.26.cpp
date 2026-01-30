// 01.29.26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
   //while loop
	int i = 0;
	while (i < 5) {
		cout << i << " "; // 0, 1, 2, 3, 4
		i++; // i = i + 1
	}

	// do-while loop
	int i = 0;
	do {
		cout << i << " ";
		i++;
	} while (i < 5);

	// for loop
	// for (where to start; where to stop; how to change)
	for (int i = 0; i < 5; i++)
	{
		cout << "Hello!" << endl;
	}

	//arrays
	int nums[5] = { 10, 20, 30, 40, 50 };
	// ERROR: cout << nums[5];
	cout << "Elements of the array: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << " ";

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
