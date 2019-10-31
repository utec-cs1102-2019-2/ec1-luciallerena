//
// Created by lucia.llerena on 31/10/2019.
//

#ifndef HERENCIA_COMIDA_H
#define HERENCIA_COMIDA_H
class Comida {
private:
    int Nombre;
    int Cantidad;
public:
    Comida(int, int);
    ~Comida();
    int getCantidad();
    int getNombre();

};

#endif //HERENCIA_COMIDA_H
