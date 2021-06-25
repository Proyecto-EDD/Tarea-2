#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct poli{    //struct polinomio para la diferenciacion de informacion
    int M; //cantidad de datos monomios
    int E; //exponente monomio
    int C; //coeficiente
};

int LectorDatos(){
    ifstream fp;
    int N;

    fp.open("entradaPolinomio.txt"); //en default se abre en texto{ASCII}

    if (!fp.is_open()) { //mensaje de error en caso de que no abra el archivo
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    poli pol;   //uso de struct
    int x = 0;  //contador de posicion

    fp >> N; //lee la cantidad de polinomios
    while(N > 0){   //mientras no se acaben los polinomios continua
        fp >> pol.M;    //lee la primera linea despues de la cantidad de polinomios para conseguir M
        int A [pol.M*2];    //crear el arreglo con la cantidad de datos necesarios
        for(int i=0;i < pol.M;i++){ // lee los datos del monomio correspondiente
            fp >> pol.E;    //lee el exponente
            fp >> pol.C;    //lee el coeficiente
            A[x] = pol.E;   //se añade el exponente al arreglo
            x++;    //se mueve un espacio para añadir el coeficiente
            A[x] = pol.C,   //se añade el coeficiente al arreglo
            x++;    //se mueve un espacio para añadir el siguiente exponente si es que hay
        }
        //aqui se deberia colocar el comando para añadir el struct al tda
        x = 0;  //reinicia el contador de posicion
        N--;    //reduce la cantidad de polinomios restantes
    }
    fp.close();
    return 0;
}

int main(){
    int data = LectorDatos(); //mas que nada para ir probando
}
//el comando que utilizo para la ejecucion es "g++ datos.cpp && ./a.out"