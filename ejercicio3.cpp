//
// Created by lucia.llerena on 12/09/2019.
//

#include <iostream>

using namespace std;
int main() {
    char x; int y;
    cout<<"Ingrese valor del caracter y el entero";
    cin>>x>>y;
    char *p1=&x;
    int *p2=&y;
    char *pp1=p1;
    int *pp2=p2;

    cout<<*pp2;
    cout<< *p1;
    cout<<*pp1;

    return 0;
}