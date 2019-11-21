//
// Created by lucia.llerena on 20/11/2019.
//
#ifndef SESSION14A_PALO_H
#define SESSION14A_PALO_H
#include "Carta.h"
#include <iostream>
#include <vector>

using namespace std;

class Palo {
public:
    string nombre;
    string color;
    vector<Carta> cartas;
    Palo(string nombre, string color);

};


#endif //SESSION14A_PALO_H
