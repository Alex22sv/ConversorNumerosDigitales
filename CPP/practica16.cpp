#include <iostream>
#include <windows.h>
using namespace std;

// Declaración de funciones
void tipoDeDato(int n1, int n2, int n3);

int main(){
    // Mostrar el tipo de triángulo según la medida de lados ingresada por el usuario
    SetConsoleOutputCP(CP_UTF8);
    float lado1 = 0, lado2 = 0, lado3 = 0;

    cout<<"\n------------------Tipo de triángulos------------------\n";
    cout<<"Ingrese el valor del lado #1: ";
    cin>>lado1;
    cout<<"Ingrese el valor del lado #2: ";
    cin>>lado2;
    cout<<"Ingrese el valor del lado #3: ";
    cin>>lado3;
    tipoDeDato(lado1, lado2, lado3);
    return 0;
}

void tipoDeDato(int n1, int n2, int n3){
    // Caso 1: triángulo equilátero
    if((n1 == n2) && (n2 == n3) && (n1 == n3)){
        cout<<"Has ingresado los lados de un triángulo equilátero. Tiene todos los lados iguales.";
    // Caso 2: triángulo isósceles
    } else if((n1 == n2) || (n2 == n3) || (n1 == n3)){
        cout<<"Has ingresado los lados de un triángulo isósceles. Tiene dos lados iguales.";
    // Caso 3: triángulo escaleno
    } else {
        cout<<"Has ingresado los lados de un triángulo escaleno. No tiene lados iguales.";
    }
}