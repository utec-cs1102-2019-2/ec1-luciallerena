/
// Created by lucia.llerena on 20/11/2019.
//

#ifndef SESSION14A_JUEGO_H
#define SESSION14A_JUEGO_H
#include "Baraja.h"
#include "Carta.h"
#include <iostream>
#include <vector>

using namespace std;
class Juego {
public:
    Baraja *b;
    vector<Carta>cartas;
    Juego();
    void start();
    void mostrar();
    bool esPoker();
};


#endif //SESSION14A_JUEGO_H
