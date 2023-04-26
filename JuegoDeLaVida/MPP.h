#pragma once
#include "Nodo.h"
#include <iostream>

using namespace std;
class MPP
{
private:
	Nodo* raiz;
	int num_f;
	int num_c;
public:
	// Constructor
	// <param name="row">Numero de filas</param>
	// <param name="column">Numero de columnas</param>
	MPP(int row, int column);
	// Destructor basico
	~MPP() = default;
	// Agrega un dato a la matriz
	// <param name="student">Instancia de Student</param>
	bool insertNode(int dato, int fila, int columna);
	// Busca un dato
	// <param name="row">Fila del dato (Paralelo)</param>
	// <param name="column">Columna del dato (Numero lista)</param>
	// <returns>Puntero Node con que contiene un dato</returns>
	Nodo* getNode(int fila, int columna);
};

