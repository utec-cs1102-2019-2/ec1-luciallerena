//
// Created by lucia.llerena on 31/10/2019.
//

#include "Mago.h"
Mago::Mago(int nombre, int alimento, int estado){
    nombre=nombre;
    alimento=alimento;
    estado=estado;
}
int Mago::getnombre(){
    return nombre;
}
int Mago::getalimento(){
    return alimento;
}
