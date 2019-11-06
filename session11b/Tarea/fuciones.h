//
// Created by lucia.llerena on 6/11/2019.
//

#ifndef SESSION11B_2_FUNCIONES_H
#define SESSION11B_2_FUNCIONES_H
#include "Mago.h"
template <typename T>
void mostrarDatosBasicos(ostream &os,T* &objeto)
{
    os<<"\n------- Datos ------\n";
    os<<"Alimento : "<<objeto->getAlimento()<<endl;
    os<<"Cantidad: "<<objeto->getCantidad()<<endl;
    os<<"Estado : "<<objeto->getEstado()<<endl;
    objeto->Puntos(os);
    auto mago= dynamic_cast<Mago*>(objeto);
    if (mago != nullptr)
        gato->puntos(os);

}

#endif //SESSION11B_2_FUNCIONES_H
