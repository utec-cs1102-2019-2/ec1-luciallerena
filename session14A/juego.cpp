//
// Created by lucia.llerena on 20/11/2019.
//

#include "Juego.h"
#include <ctime>
Juego::Juego(){
    b=new Baraja();
}
void Juego::start(){
    for(int i=0;i<5;i++){
        int iPalo=rand()%4; int iCarta=rand()%4;

        cartas.push_back(b->palos[iPalo].cartas[iCarta]);
    }
}
void Juego::mostrar(){
    for(int i=0;i<cartas.size();i++){
        Carta Carta=cartas[i];
        Carta.mostrar();
    }
}
bool Juego::esPoker(){
    for(int i=0;i<5;i++){
        int repite=0;
        Carta c1=cartas[i];
        for(int j=0;j<5;j++){
            Carta c2=cartas[j];
            if(c1.num==c2.num){
                repite++;
            }
        }
        if(repite==4){
            return true;
        }
    }
    return false;
}
