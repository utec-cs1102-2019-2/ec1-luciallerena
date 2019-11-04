//
// Created by lucia.llerena on 31/10/2019.
//




#ifndef HERENCIA_ESTADO_H
#define HERENCIA_ESTADO_H
#include <iomanip>
#include <iostream>
using namespace std;
class Estado {
private:
    string Estado;
    int Cantidad;
public:
    Estado(string, int);
    ~Estado();
    int getCantidad();
    string getEstado();

};


#endif //HERENCIA_ESTADO_H
