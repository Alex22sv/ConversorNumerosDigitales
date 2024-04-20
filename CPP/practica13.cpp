#include <iostream>
#include <windows.h>

using namespace std;

// Declaración de funciones
bool validarValor(int valorIngresado);
float convertirEuroDolar(int valorEuro);
float convertirDolarEuro(int valorDolar);

// Declaración de variables globales
float euro = 0.93;

int main(){
    // Mostrar caracteres
    SetConsoleOutputCP(CP_UTF8);

    int casoConversion = 0, ingresoDolar = 0, ingresoEuro = 0;
    cout<<"Bienvenido al sistema!\n¿Qué tipo de conversión desea realizar? \n1. De dólares a euros\n2. De euros a dólares\n... ";
    cin>>casoConversion;
    if(casoConversion==1){
        cout<<"Ingrese la cantidad de dólares: ";
        cin>>ingresoDolar;
        if(validarValor(ingresoDolar)){
            cout<<"El resultado de convertir de dólares a euros es: "<<convertirDolarEuro(ingresoDolar);
        } else {
            cout<<"Solo puedes ingresar valores pares.";
        }
    } else {
        cout<<"Ingrese la cantidad de euros: ";
        cin>>ingresoEuro;
        if(validarValor(ingresoEuro)){
            cout<<"El resultado de convertir de euros a dólares es: "<<convertirEuroDolar(ingresoEuro);
        } else {
            cout<<"Solo puedes ingresar valores pares.";
        }
    }

    return 0;
}

// Definición de funciones
bool validarValor(int valorIngresado){
    if((valorIngresado%2) == 0){
        return true;
    } else {
        return false;
    }
}

float convertirEuroDolar(int valorEuro){
    float resultado = 0;
    resultado = valorEuro/euro;
    return resultado;
}

float  convertirDolarEuro(int valorDolar){
    float resultado = 0;
    resultado = valorDolar*0.93;
    return resultado;
}