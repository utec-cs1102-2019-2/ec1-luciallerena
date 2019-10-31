//
// Created by lucia.llerena on 31/10/2019.
//

#ifndef SESSION11B_2_MAGO_H
#define SESSION11B_2_MAGO_H
#include "Comida.h"
#include "Estado.h"

class Mago {
private:
    int nombre;
    int estado;
    int alimento;

public:
    Mago(int nombre, int alimento, int estado);
    int getnombre();
    int getalimento();
    void alimentar(ostream &os,Comida* palimento)=0;

};


#endif //SESSION11B_2_MAGO_H
