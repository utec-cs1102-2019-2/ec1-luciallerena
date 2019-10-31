//
// Created by lucia.llerena on 31/10/2019.
//

#include "Comida.h"

Comida::Comida(int pNombre, int pCantidad) {
    Nombre = pNombre;
    Cantidad = pCantidad;
}
Comida::~Comida() {

}
int Comida::getCantidad() {
    return Cantidad;
}
int Comida::getNombre() {
    return  Nombre;
}
