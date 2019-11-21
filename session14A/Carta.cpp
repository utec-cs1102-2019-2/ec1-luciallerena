
//
// Created by lucia.llerena on 20/11/2019.
//

#include "Carta.h"
Carta::Carta(int num,string palo) {
    this->num=num;
    this->palo=palo;
}
void Carta::mostrar(){
    cout<<num<<" "<<palo<<endl;
}
