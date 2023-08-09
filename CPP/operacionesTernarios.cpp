#include <iostream>
#include <windows.h>

using namespace std;

void ValidarEdad(int edad){
    (edad>=18) ? cout<<"Eres mayor de edad" : cout<<"No eres mayor de edad";
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    /* if(5>4){
        cout<<"5 es mayor que 4";
    } else {
        cout<<"5 no es mayor que 4";
    } */
    /* Anidar instrucciones */
    ((5>4)&&(12>3)) ? cout<<"5 es mayor que 4" : cout<<"5 no es mayor que 4";
    int edadIngresada = 0;
    cout<<"\nIngrese su edad: ";
    cin>>edadIngresada;
    ValidarEdad(edadIngresada);
    return 0;
}