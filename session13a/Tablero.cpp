
#include "Tablero.h"
#include <iostream>

Tablero::Tablero() {
this->f=f;
this->c=c;
   for(int i=0; i<f; i++){
        vector<Cuadrado> f;
        for(int j=0; j<c; j++){
            Cuadrado *c = new Cuadrado();
            fila.push_back(*c);
        }
        this->grilla.push_back(f);
    }
}

void Tablero::mostrar() {
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout << grilla[i][j].marca <<"\t";
        }
        cout<<endl;
    }
