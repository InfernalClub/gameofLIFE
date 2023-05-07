#include <iostream>
using namespace std;

class Nodo {

private:
	int valor;
	int fila;
	int columna;
	Nodo* down;
	Nodo* right;
	Nodo* left;
	Nodo* up;

public:
	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="valor">Instancia dato que contendra el nodo</param>
	/// <param name="row">Ubicacion fila del nodo</param>
	/// <param name="column">Ubicacion columna del nodo</param>
	Nodo(int valor, int fila, int columna);
	/// <summary>
	/// Destructor basico
	/// </summary>
	~Nodo();
	/// <summary>
	/// Obtiene el valor almacenado
	/// </summary>
	/// <returns>int</returns>
	int getValor();
	/// <summary>
	/// Obtiene el valor del nodo
	/// </summary>
	int getFila();
	/// <summary>
	/// Obtiene la columna de ubicacion
	/// </summary>
	int getColumna();
	/// <summary>
	/// Obtiene el siguiente hacia abajo
	/// </summary>
	Nodo* getDown();
	/// <summary>
	/// Obtiene el siguiente Nodo hacia abajo
	/// </summary>
	Nodo* getRight();
	/// <summary>
	/// Obtiene el siguiente Nodo a la derecha
	/// </summary>
	Nodo* getUp();
	/// <summary>
	/// Obtiene el siguiente Nodo hacia arriba
	/// </summary>
	Nodo* getLeft();
	/// <summary>
	/// Obtiene el siguiente Nodo hacia la izquierda
	/// </summary>
	void setValor(int valor);
	/// <summary>
	/// Cambia el estado actual del Nodo
	/// </summary>
	void setFila(int fila);
	/// <summary>
	/// Establece nueva ubicacion en fila
	/// </summary>
	void setColumna(int columna);
	/// <summary>
	/// Establece una nueva ubicacion en columna
	/// </summary>
	void setDown(Nodo* down);
	/// <summary>
	/// Establece un nuevo nodo por debajo
	/// </summary>
	void setRight(Nodo* right);
	/// <summary>
	/// Establece un nuevo nodo derecho
	/// </summary>
	void setUp(Nodo* up);
	/// <summary>
	/// Establece un nuevo nodo por arriba
	/// </summary>
	void setLeft(Nodo* left);
	/// <summary>
	/// Establece un nuevo nodo hacia la izquierda
	/// </summary>
};