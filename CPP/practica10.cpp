#include <iostream>
#include <windows.h>

using namespace std;

// Declaración de funciones
void RepetirPalabras();
float Multiplicacion(float x, float y);
float Division(float x, float y);

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int opcion = 0;
    float n1 = 0, n2 = 0;
    // Una función con un ciclo for que repita 3 veces "hola";
    RepetirPalabras();

    cout<<"Ingrese 1 para multiplicación o 2 para división: ";
    cin>>opcion;
    cout<<"Ingrese el primer valor: ";
    cin>>n1;
    cout<<"Ingrese el segundo valor: ";
    cin>>n2;
    switch (opcion){
    case 1:
        cout<<"El resultado es: "<<Multiplicacion(n1, n2);
        break;
    case 2:
        cout<<"El resultado es: "<<Division(n1, n2);
        break;
    default:
        cout<<"Has ingresado una opción no válida.";
        break;
    }
    return 0;
}

void RepetirPalabras(){
    for (int i = 0; i < 3; i++)
    {
        cout<<"Hola\n";
    }
    
}
float Multiplicacion(float x, float y){
    return x*y;
}
float Division(float x, float y){
    return x/y;
}