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

string Comida::getAlimento() {
    return  Alimento;
}
int Comida::getCantidad() {
    return Cantidad;
}
