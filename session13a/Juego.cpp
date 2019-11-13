#include "Juego.h"

Juego::Juego() {
}

void Juego::jugar() {
if(turno == 1){
    j1->marcar();
    turno = 2;
}else if(turno == 2){
    j2->marcar();
    turno = 1;
}
