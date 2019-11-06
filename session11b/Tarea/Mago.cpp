#include "Mago.h"
Mago::Mago(string pAlimento, int pCantidad, string pEstado){
    Alimento=pAlimento;
    Cantidad=pCantidad;
    Estado=pEstado;
}
Mago::Mago(){}
Mago::~Mago() {}
string Mago::getAlimento(){
    return Alimento;
}
int Mago::getCantidad(){
    return Cantidad;
}
string Mago::getEstado(){
    return Estado;
}
