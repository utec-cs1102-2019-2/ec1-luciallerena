//
// Created by lucia.llerena on 31/10/2019.
//
#ifndef SESSION11B_2_MAGO_H
#define SESSION11B_2_MAGO_H
#include "Comida.h"
#include "Estado.h"

class Mago {
private:
    int estado;
    int Alimento;
    int Cantidad;

public:
    Mago(int Alimento, int Cantidad, int estado);
    Mago();
    virtual ~Mago();
    int getCantidad();
    int getAlimento();
    void alimentar(Comida* Alimento);
};


#endif //SESSION11B_2_MAGO_H
