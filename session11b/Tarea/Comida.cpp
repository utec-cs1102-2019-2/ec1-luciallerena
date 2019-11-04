//
// Created by lucia.llerena on 31/10/2019.
//
#include <iomanip>
#include <iostream>
using namespace std;
#include "Comida.h"
Comida::Comida(string pAlimento, int pCantidad) {
    Alimento = pAlimento;
    Cantidad = pCantidad;
}
Comida::~Comida() {

}
int Comida::getCantidad() {
    return Cantidad;
}
string Comida::getAlimento() {
    return  Alimento;
}
