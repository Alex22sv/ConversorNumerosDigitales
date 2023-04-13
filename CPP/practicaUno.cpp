#include <iostream>
// Librerías para imprimir caracteres especiales
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    // Función que permite usar distintos tipos de caracteres
    setlocale(LC_ALL, "spanish");
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