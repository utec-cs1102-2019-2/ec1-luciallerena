#ifndef SESSION13A_TABLERO_H
#define SESSION13A_TABLERO_H

#include <vector>
#include "Cuadrado.h"
using namespace std;
class Tablero {
public:
    int f= 3;
    int c = 3;
    vector<vector<Cuadrado>> grilla;

    Tablero();
    void mostrar();
};


#endif 
