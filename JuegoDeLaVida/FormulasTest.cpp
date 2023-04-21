#include <iostream>
using namespace std;

class Nodo
{
public:
	int FILA;
	int COL;
	int DATA;
	Nodo* next;
};

void crearNodo(Nodo** p, int filaIndex, int colIndex, int x)
{
	Nodo* temp = *p;
	Nodo* r;

	// Si la lista esta limpia se crea el primer Nodo y se asigna un valor.

	if (temp == NULL)
	{
		temp = new Nodo();
		temp->FILA = filaIndex;
		temp->COL = colIndex;
		temp->DATA = x;
		temp->next = NULL;
		*p = temp;

	}

	// Si la lista ya posee nodos, se agrega el nuevo nodo al final de la cola de la siguiente manera.
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		r = new Nodo();
		r->FILA = filaIndex;
		r->COL = colIndex;
		r->DATA = x;
		r->next = NULL;
		temp->next = r;
	}
}

//Imprimir la lista con nexos desde el inicio

void printListaCelulasVivas(Nodo* start)
{
	Nodo* ptr = start;
	cout << "Posicion_en_Fila: ";
	while (ptr != NULL)
	{
		cout << ptr->FILA << " ";
		ptr = ptr->next;
	}
	cout << endl;
	cout << "Posicion_en_Columna";
	ptr = start;

	while (ptr != NULL)
	{
		cout << ptr->DATA << " ";
		ptr = ptr->next;
	}

}
/*
// Areglo dinamico para cuando tengamos que especificar el tamaño de la matriz
int main()
{
	int col, fil;
	cout << "cuantas filas y columnas: ";
	cin >> fil >> col;

	int** table = new int* [fil];
	for (int i = 0; i < fil; i++)
	{
		table[i] = new int[col];
	}

	for (int i = 0; i < fil; i++)
	{
		delete[] table[i];
	}
	delete[] table;
	table = NULL;





}
*/
