#include "MPP.h"

MPP::MPP(int fila, int columna)
{
	this->a_row = new Nodo(fila);
	this->a_column = new Nodo(columna);
	for (int i = 0; i < fila; i++)
	{
		(this->a_row + i)->setLeft(this->a_row + i);
		(this->a_row + i)->setColumna(0);

		if (i < columna)
		{
			(this->a_column + i)->setUp(this->a_column + i);
			(this->a_column + i)->setFila(0);
		}
	}
}

void MPP::addNode(int dato,int fila, int columna)
{
	Nodo* nuevoNodo = new Nodo(dato, fila, columna);
	Nodo* aux = &a_row;
}

Nodo* MPP::searchNode(int fila, int columna)
{
	if (fila < 1 || columna < 1) {
		return nullptr;
	}

	Nodo* aux = this->a_row + fila - 1;

	while (aux->getLeft()->getColumna() >= columna)
	{
		aux = aux->getLeft();
	}
	if (aux != this->a_row + fila - 1)
	{
		if (aux->getColumna() == columna)
		{
			return aux;
		}
	}
	return nullptr;
}
