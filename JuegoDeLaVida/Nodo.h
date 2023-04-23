#include <iostream>
using namespace std;

class Nodo {

private:
	int valor;
	int fila;
	int columna;
	Nodo* up;
	Nodo* left;
public:
	/// <summary>
	/// Constructor
	/// </summary>
	Nodo();
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
	/// Obtiene el siguiente hacia arriba
	/// </summary>
	/// <returns>Puntero Node*</returns>
	Nodo* getUp();
	/// <summary>
	/// Obtiene el siguiente Nodo a la izquierda
	/// </summary>
	/// <returns>Puntero Node*</returns>
	Nodo* getLeft();
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
	/// Establece un nuevo nodo hacia arriba
	/// </summary>
	/// <param name="up">Puntero de Instancia de Nodo</param>
	void setUp(Nodo* up);
	/// <summary>
	/// Establece un nuevo nodo izquierdo
	/// </summary>
	/// <param name="left">Puntero de Instancia de Nod</param>
	void setLeft(Nodo* left);
};