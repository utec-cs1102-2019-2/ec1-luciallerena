#include "Humano.h"

Humano::Humano(int numero, string nombre) : Jugador(numero, nombre) {
  cout<<"Creando humano"<<endl;
}

void Humano::marcar() {
    cout<<"Tu turno"<<endl;
    int x;
    int y;
    cout<<"x:";cin>>x;
    cout<<"y:";cin>>y;
    juego->t->grilla[x][y].marca = 1;

}
