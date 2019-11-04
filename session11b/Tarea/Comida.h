//
// Created by lucia.llerena on 31/10/2019.
//

#include <iomanip>
#include <iostream>
using namespace std;
#ifndef HERENCIA_COMIDA_H
#define HERENCIA_COMIDA_H
class Comida {
private:
    string Alimento;
    int Cantidad;
public:
    Comida(string, int);
    ~Comida();
    int getCantidad();
    string getAlimento();

};

#endif //HERENCIA_COMIDA_H
