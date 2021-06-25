#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct mono{
    int* coe;
    int* exp;
    unsigned int cantidad;
};

struct nodo{
    mono monomio;
    nodo* sig;
};

class Lista {
private:
    nodo* head;
    nodo* tail;
    nodo* curr;
    unsigned int listSize;
    unsigned int pos; // posicion actual en la lista
public:
    Lista(){head = tail = curr = new nodo; listSize = 0; pos = 0;};

    //Elimina todo la lista
    void clear();

    //Inserta en donde esta el puntero
    int insert(mono item);
    

    //Agrega al final
    int append(mono item);

    // borra el elemento actual y retorna su valor
    mono erase();

    // mueve la posición actual al comienzo de la lista
    void moveToStart();

    // mueve la posición actual al final de la lista
    void moveToEnd();

    // mueve la posición actual al siguiente elemento de la lista
    // no produce cambios si está en la cola de la lista
    void next();

    // mueve la posición actual al elemento anterior de la lista
    // no produce cambios si está en la cabeza de la lista
    void prev();

    // retorna el número de elementos en la lista
    int length();

    // retorna la posición del elemento actual
    int currPos();

    // mueve la posición actual a una especificada
    void moveToPos(int pos);

    // obtiene el valor del elemento actual de la lista
    mono getValue();

    void buscar(mono& L, mono elem);


};
