#include "Tablero.h"

Tablero::Tablero(int fil, int col) {
    this->fil = fil;
    this->col = col;
    for(size_t i=0; i<fil; i++){
        vector<Bloque> fil;
        for(size_t j=0;j<col; j++){
            Bloque *bloque = new Bloque();
            fil.push_back(*bloque);
        }
        this->bloques.push_back(fil);
    }
}

void Tablero::minas() {
    int a;
    int b;
    srand(time(NULL));
    for(size_t i=0; i<10 ; i++){
        a = rand()%fil;
        b = rand()%col;
        this->bloques[a][b].es_mina = true;
    }
}

void Tablero::mostrar() {
    cout<<"Cantidad de filas "<<this->fil<<endl;
    cout<<"Cantidad de columnas "<<this->col<<endl;

    for(size_t i=0; i<this->fil; i++){

        for(size_t j=0; j<this->col; j++){
            if(bloques[i][j].es_mina == true){
                cout<<"*";
                c++;
            }else{
                cout<<bloques[i][j].minas;
            }
        }
        cout<<endl;

    }cout<<endl<<"Hay "<<c<<" minas";
}

