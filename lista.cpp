#include <iostream>
#include <string>
#include <fstream>
#include "listahead.hpp"

using namespace std;




//Agrega al final
int Lista::append(mono item){
    moveToEnd();
    insert(item);
    return 1;
};


// mueve la posición actual al comienzo de la lista
void Lista::moveToStart(){
    if (pos > 1){
        prev();
        moveToStart();
    }
    return;
};

// mueve la posición actual al final de la lista
void Lista::moveToEnd(){
    if (pos < listSize){
        next();
        moveToEnd();
    }
    return;
};

// mueve la posición actual al siguiente elemento de la lista
// no produce cambios si está en la cola de la lista
void Lista::next(){
    if (pos >= listSize){
        return;
    };
    pos+=1;
    curr = curr->sig;
    return;
};

// mueve la posición actual al elemento anterior de la lista
// no produce cambios si está en la cabeza de la lista
void Lista::prev(){
    unsigned int posicionOrginal = pos;
    moveToStart();
    while(pos > posicionOrginal-1){
        next();
        pos = currPos();
    }
    return;
};

// retorna el número de elementos en la lista
int Lista::length(){
    return listSize;
};

// retorna la posición del elemento actual
int Lista::currPos(){
    return pos;
};

// mueve la posición actual a una especificada
void Lista::moveToPos(int posicion){
    if (pos > posicion){
        prev();
        moveToPos(posicion);
    }
    if (pos < posicion)
    {
        next();
        moveToPos(posicion);
    }
    return;
    
};

// obtiene el valor del elemento actual de la lista
mono Lista::getValue(){
    return curr->monomio;
};



/*
struct poli{
    int* coe;
    int* exp;
    unsigned int cantidad
};
*/

