#include "Sistema.h"
#include <random>

Sistema::Sistema()
{
	this->matriz = nullptr;
}

void Sistema::Menu()
{
	int opcion = 0;

	cout << "Bienvenido al Juego de la Vida de Conway \n";
	cout << "Porfavor seleccione una de las siguientes opciones: \n";
	cout << "1) Partida Rapida \n";
	cout << "2) Partida Personalizada \n";
	cout << "3) Partida Pre-fabricada \n";
	cout << "4) Puntuaciones \n";
	cout << "5) Salir \n";
	cout << "\n";
	cout << "Opcion: ";
	cin >> opcion;

	switch (opcion)
	{
	case 1: 
		{
		//rand() entrega un valor aleatorio, en este caso entre 4 y 10
		std::random_device rd;
		std::uniform_int_distribution<int> dist(4, 10);
		int fila = dist(rd);
		int columna = dist(rd);
		std::cout << dist(rd) << "\n";
		std::cout << "La cantidad de filas es de " << fila << "\n";
		std::cout << "La cantidad de columnas es de " << columna << "\n";
		}
		break;
		
		case 2:
			MenuPartidaPerso();
			break;
		case 3:
			MenuPartidaPrefab();
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "La opcion elegida fue incorrecta \n";
			cout << "\n";
			cout << "\n";
			Menu();
	}

}

void Sistema::MenuPartidaPerso()
{
	int fila = 0;
	int columna = 0;
	cout << "\nPor favor, ingresar los valores para generar el tablero de juego (maximo 13 casillas)\n";
	cout <<"\nIngrese el valor correspondiente al largo del tablero ";
	cin >> fila;
	if (fila < 13) 
	{
		cout << "\nEl largo del tablero es de " << fila << "\n";
		cout << "\nIngrese el valor correspondiente al ancho del tablero ";
		cin >> columna;
		if (columna < 13)
		{
			cout << "\nEl ancho del tablero es de " << columna << "\n";
			this->matriz->insertNode(0, fila, columna);
			crearMatriz(fila, columna);

		}
		else
		{
			cout << "\nEl sistema no puede procesar más de 13 casillas\n";
			MenuPartidaPerso();
		}
	}
	else {
		cout << "\nEl sistema no puede procesar más de 13 casillas\n";
		MenuPartidaPerso();
	}
}



void Sistema::MenuPartidaPrefab()
{
	char opcion;
	int fila = 0;
	int columna = 0;
	cout << "\nPor favor, seleccionar el tipo de tablero\n";
	cout << "A) 4x4\n";
	cout << "B) 5x5\n";
	cout << "C) 6x6\n";
	cout << "D) 10x10\n";
	cin >> opcion;
	switch (opcion)
	{
	case 'a':
		fila = 4;
		columna = 4;
		this->matriz->insertNode(0, 4, 4);
		break;

	case 'b':
		fila = 5;
		columna = 5;
		this->matriz->insertNode(0, 5, 5);
		break;

	case 'c':
		fila = 6;
		columna = 6;
		this->matriz->insertNode(0, 6, 6);
		break;

	case 'd':
		fila = 10;
		columna = 10;
		this->matriz->insertNode(0, 10, 10);
		break;

	default:
		cout << "\nOpcion no valida.\n";
		MenuPartidaPrefab();
		break;
	}


}
void Sistema::crearMatriz(int fila, int columna)
{
	int** table = new int* [fila];
	for (int i = 0; i < fila; i++)
	{
		table[i] = new int[columna];
	}
	

	for (int i = 0; i < fila; i++)
	{
		delete[] table[i];
	}
	delete[] table;
	table = NULL;

}




