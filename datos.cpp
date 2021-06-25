#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int LectorDatos(){
    ifstream fp;
    int N,id;
    fp.open("entradaPolinomio.txt"); //en default se abre en texto{ASCII}

    if (!fp.is_open()) { //mensaje de error en caso de que no abra el archivo
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    fp >> N; //lee la cantidad de polinomios
    cout << N << endl; //imprime la cantidad N de polinomios

    while( fp >> id){ // lee completamente el archivo sin contar la cantidad de polinomios obviamente
        cout << id << endl;
    }
    //encontrar la manera de crear una lista usando arreglos para despues procesar la data
    fp.close();
    return 0;
}

int main(){
    int data = LectorDatos(); //mas que nada para ir probando
}
//el comando que utilizo para la ejecucion es "g++ datos.cpp && ./a.out"