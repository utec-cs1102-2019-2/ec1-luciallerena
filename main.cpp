#include <iostream>

using namespace std;


void notas(float &x,float &y);

int main() {
    float n=0.0,puntos=0.0;
    notas(n,puntos);
    float *total=&n;
   *total=n+puntos;
   cout<<*total;
    return 0;
}

void notas (float &x, float &y){
    cout<<"Ingrese nota y puntos adicionales";
    cin>>x;
    cin>>y;
    return;
}