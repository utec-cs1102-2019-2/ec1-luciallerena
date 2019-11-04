//
// Created by lucia.llerena on 31/10/2019.
//

#include "Mago.h"
Mago::Mago(int Alimento, int Cantidad, int estado){
  
    Alimento=Alimento;
    Cantidad=Cantidad;
    estado=estado;
}
Mago::~Mago() {}
int Mago::getAlimento(){
    return Alimento;
}
int Mago::getCantidad(){
    return Cantidad;
}
