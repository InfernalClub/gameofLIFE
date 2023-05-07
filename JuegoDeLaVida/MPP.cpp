#include "MPP.h"

MPP::MPP(int row, int column)
{
    num_f = row;
    num_c = column;
    raiz = new Nodo(0, 0, 0);
    Nodo* current = raiz;
    for (int i = 0; i <= num_f; i++) {
        Nodo* new_node = new Nodo(i, 0, 0);
        current->setDown(new_node);
        current = new_node;
    }
    current->setDown(raiz);
    current = raiz;
    for (int j = 0; j <= num_c; j++) {
        Nodo* new_node = new Nodo(0, j, 0);
        current->setRight(new_node);
        current = new_node;
    }
    current->setRight(raiz);
}

bool MPP::insertNode(int dato, int fila, int columna)
{
    Nodo* current_row = raiz;
    Nodo* prev_row = NULL;
    while (current_row->getFila() < fila) {
        prev_row = current_row;
        current_row = current_row->getDown();
    }
    Nodo* current_col = current_row;
    Nodo* prev_col = NULL;
    while (current_col->getColumna() < columna) {
        prev_col = current_col;
        current_col = current_col->getRight();
    }
    if (current_col->getColumna() == columna && current_col->getFila() == fila) {
        current_col->setValor(dato);
        return true;
    }
    return false;
}

Nodo* MPP::getNode(int fila, int columna)
{
    Nodo* current_row = raiz;
    while (current_row->getFila() < fila) {
        current_row = current_row->getDown();
    }
    Nodo* current_col = current_row;
    while (current_col->getColumna() < columna) {
        current_col = current_col->getRight();
    }
    if (current_col->getColumna() == columna && current_col->getFila() == fila) {
        return current_col;
    }
    else {
        return nullptr;
    }


}
