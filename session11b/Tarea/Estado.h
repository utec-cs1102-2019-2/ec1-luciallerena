#ifndef HERENCIA_ESTADO_H
#define HERENCIA_ESTADO_H
#include <iomanip>
#include <iostream>
using namespace std;
class Estado {
protected:
    string Est;
    int Cantidad;
public:
    Estado(string, int);
    ~Estado();
    int getCantidad();
    string getEst();

};


#endif //HERENCIA_ESTADO_H
