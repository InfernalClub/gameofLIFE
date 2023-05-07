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
	// <param name="num_f">Numero de filas</param>
	// <param name="num_c">Numero de columnas</param>
	MPP(int row, int column);
	// Destructor basico
	~MPP() = default;
	// Agrega un dato a la matriz
	bool insertNode(int dato, int fila, int columna);
	// Busca un dato
	// <param name="num_f">Fila del dato (Paralelo)</param>
	// <param name="num_c">Columna del dato (Numero lista)</param>
	Nodo* getNode(int fila, int columna);
};

