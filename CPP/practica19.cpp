#include <iostream>
#include <windows.h>

using namespace std;

// Declaración de funciones
// Cuando declaremos una función, se recomienda no agregar la dimensión del arreglo cuando se pasa como parámetro
int calcularTemperaturasAltas(float temperaturas[]);
void determinarUsoBloqueadorSolar(int temperaturasAltas);

int main(){
    SetConsoleOutputCP(CP_UTF8);

    cout<<"\n--------Sistema de temperaturas--------\n";
    float temperaturas[10];
    for (int i = 0; i < 10; i++){
        cout<<"Ingrese la temperatura del día #"<<i+1<<": ";
        cin>>temperaturas[i];
    }
    
    // Determinar la recomendación del uso de bloqueador solar
    determinarUsoBloqueadorSolar(calcularTemperaturasAltas(temperaturas));
    return 0;
}

// Definición de funciones
int calcularTemperaturasAltas(float temperaturas[]){
    int cantidadTemperaturasAltas = 0;
    for (int i = 0; i < 10; i++)
    {
        if(temperaturas[i]>40.00){
            cantidadTemperaturasAltas++;
        }
    }
    return cantidadTemperaturasAltas;
}
void determinarUsoBloqueadorSolar(int temperaturasAltas){
    if(temperaturasAltas>=5){
        cout<<"Uso obligatorio de bloqueador solar.";
    } else {
        cout<<"Es recomendado utilizar bloqueador solar.";
    }
}