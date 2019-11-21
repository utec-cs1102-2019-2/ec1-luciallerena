//
// Created by lucia.llerena on 20/11/2019.
//

#include <vector>
#include "Baraja.h"
Baraja::Baraja() {
    Palo *corazones=new Palo("corazones","rojo");
    Palo *trebol=new Palo("trebol","negro");
    Palo *rombo=new Palo("rombo","rojo");
    Palo *espada=new Palo("espada","negro");
    palos.push_back(*trebol);
    palos.push_back(*rombo);
    palos.push_back(*corazones);
    palos.push_back(*espada);
}
