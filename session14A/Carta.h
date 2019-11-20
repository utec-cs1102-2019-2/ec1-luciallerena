#ifndef SESSION14A_CARTA_H
#define SESSION14A_CARTA_H
#include "Palo.h"

class Carta {
int num;
palo *palo;
carta (palo *p);

public:
    Carta();
    ~Carta();
    void carta();
};


#endif //SESSION14A_CARTA_H
