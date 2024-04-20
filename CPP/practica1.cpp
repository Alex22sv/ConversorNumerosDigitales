#include <iostream>
// Librerías para imprimir caracteres especiales
#include <windows.h>

using namespace std;

int main(){
    // Función que permite usar distintos tipos de caracteres (no funciona por X razón)
    SetConsoleOutputCP(CP_UTF8);
    // Definir variables
    int anioNacimiento, edad;
    // Definir constantes
    const int anioActual = 2023;
    // Pedir valor
    cout<<"Ingrese su año de nacimiento: ";
    cin>>anioNacimiento;
    // Calcular edad
    edad = anioActual - anioNacimiento;
    cout<<"Su edad actual es: " << edad;

    return 0;
}