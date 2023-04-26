#include "Sistema.h"

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
	cout << "\n";

	switch (opcion)
	{
		case 1:
			//rand() entrega un valor aleatorio, en este caso entre 4 y 10
			int fila_1 = 4 + rand() % 11;
			int columna_1 = 4 + rand() % 11;
			for (int i = 1; i <= fila_1; i++)
			{
				for (int j = 1; j <= columna_1; j++) 
				{
					matriz->insertNode(0,i,j);
				}
			}
			break;
		case 2:
			break;
		case 3:
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
