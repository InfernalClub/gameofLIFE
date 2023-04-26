#include <iostream>
using namespace std;

class Nodo {

private:
	int valor;
	int fila;
	int columna;
	Nodo* down;
	Nodo* right;
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
	/// Obtiene la fila de ubicacion
	/// </summary>
	/// <returns>int</returns>
	int getFila();
	/// <summary>
	/// Obtiene la columna de ubicacion
	/// </summary>
	/// <returns>int</returns>
	int getColumna();
	/// <summary>
	/// Obtiene el siguiente hacia abajo
	/// </summary>
	/// <returns>Puntero Node*</returns>
	Nodo* getDown();
	/// <summary>
	/// Obtiene el siguiente Nodo a la derecha
	/// </summary>
	/// <returns>Puntero Node*</returns>
	Nodo* getRight();
	/// <summary>
	/// Establece un nuevo dato en el nodo
	/// </summary>
	/// <param name="student">Puntero de Instancia de studiante</param>
	void setValor(int valor);
	/// <summary>
	/// Establece nueva ubicacion fila
	/// </summary>
	/// <param name="row">Numero de fila</param>
	void setFila(int fila);
	/// <summary>
	/// Establece nueva ubicacion columna
	/// </summary>
	/// <param name="column">Numero de columna</param>
	void setColumna(int columna);
	/// <summary>
	/// Establece un nuevo nodo hacia abajo
	/// </summary>
	/// <param name="down">Puntero de Instancia de Nodo</param>
	void setDown(Nodo* down);
	/// <summary>
	/// Establece un nuevo nodo derecho
	/// </summary>
	/// <param name="right">Puntero de Instancia de Nod</param>
	void setRight(Nodo* right);
};