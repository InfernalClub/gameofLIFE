#include "Nodo.h"

Nodo::Nodo(int valor, int fila, int columna)
{
	this->valor = valor;
	this->fila = fila;
	this->columna = columna;
	this->down = nullptr;
	this->right = nullptr;
	this->up = nullptr;
	this->left = nullptr;
}

Nodo::~Nodo()
{
	this->valor = NULL;
	this->fila = -1;
	this->columna = -1;
	this->down = nullptr;
	this->right = nullptr;
	this->up = nullptr;
	this->left = nullptr;
}

int Nodo::getValor()
{
	return this->valor;
}

int Nodo::getFila()
{
	return this->fila;
}

int Nodo::getColumna()
{
	return this->columna;
}

Nodo* Nodo::getDown()
{
	return this->down;
}

Nodo* Nodo::getRight()
{
	return this->right;
}

Nodo* Nodo::getUp()
{
	return this->up;
}

Nodo* Nodo::getLeft()
{
	return this->left;
}
void Nodo::setValor(int valor)
{
	this->valor = valor;
}

void Nodo::setFila(int fila)
{
	this->fila = fila;
}

void Nodo::setColumna(int columna)
{
	this->columna = columna;
}

void Nodo::setDown(Nodo* down)
{
	this->down = down;
}

void Nodo::setRight(Nodo* right)
{
	this->right = right;
}

void Nodo::setUp(Nodo* up)
{
	this->up = up;
}

void Nodo::setLeft(Nodo* left)
{
	this->left = left;
}
