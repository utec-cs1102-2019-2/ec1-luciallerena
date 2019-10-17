#include "Alumno.h"
#include <iostream>

void Alumno::setNombre(string nombre){
    this->nombre=nombre;
}
string Alumno::getNombre(){
    return this->nombre;
}
void Alumno::setApellidos(string apellidos){
    this->apellidos=apellidos;
}
string Alumno::getApellidos(){
    return this->apellidos;
}
void Alumno::setEdad(int edad){
    this->edad=edad;
}
int Alumno::getEdad(){
    return this->edad;
}
void Alumno::setCreditos(int creditos){
    this->creditos=creditos;
}
int Alumno::getCreditos(){
    return this->creditos;
}
void Alumno::print(){
    cout<<this->getNombre()<<"  "<<this->getApellidos()<<"\t";
    cout<<"Edad: "<<this->getEdad()<<"\t";
    cout<<"Creditos: "<<this->getCreditos()<<endl;
}
