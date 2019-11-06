#ifndef SESSION11B_2_MAGO_H
#define SESSION11B_2_MAGO_H
#include "Comida.h"
#include "Estado.h"

class Mago {
protected:
    string Estado;
    string Alimento;
    int Cantidad;

public:
    Mago(string pAlimento, int pCantidad, string pEstado);
    Mago();
    virtual ~Mago();
    int getCantidad();
    string getAlimento();
    string getEstado();
    virtual void alimentar(ostream &os, Comida* pAlimento)=0;
};


#endif //SESSION11B_2_MAGO_H
