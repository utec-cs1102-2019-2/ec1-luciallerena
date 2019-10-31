
#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H


#include <iostream>
#include <vector>
#include "Bloque.h"
#include <ctime>
using namespace std;

class Tablero {
private:
    int fil;
    int col;
    int c=0;
    vector<vector<Bloque>> bloques;
public:
    Tablero(int fil, int col);
    void minas();
    void mostrar();
    void contar_m(int fil, int col,int c);
};


#endif
