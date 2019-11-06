//
// Created by lucia.llerena on 6/11/2019.
//
#include <iostream>
using namespace std;
#include "Bicicleta.h"
#include <ctime>
Bicicleta::Bicicleta(){
    srand(time(nullptr));
    x=0;
    y=0;
    VelMin=0;
    VelMax=137;
    VelActual=VelMin+(rand()%(VelMax-VelMin+1));
}

void Bicicleta::avanzar(){
    Vehiculo::avanzar();
    cout<<"Avanzando"<<endl;
    cout<<"Desde "<<x<<" , "<<y<<endl;
    x=x+VelActual;
    cout<<"Hasta "<<x<<" , "<<y;
}
void Bicicleta::retroceder(){
    Vehiculo::retroceder();
    cout<<"Retrocediendo"<<endl;
    cout<<"Desde "<<x<<" , "<<y<<endl;
    x=x-VelActual;
    cout<<"Hasta "<<x<<" , "<<y;
}
