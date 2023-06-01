#include <iostream>
#include <windows.h>

using namespace std;

// Declaración de funciones
int calcularPago(int cantidad, int tipo);
// Declaración de variables globales
int precioPlantaOrnamental = 15;
int precioPlantaMedicinal = 25;

int main(){
    // Función que permita calcular el total a pagar por una planta de un vivero.
    // Tomar en cuenta la cantidad de plantas y tipo de planta. Finalmente retornar el total a pagar
    // Tipo de planta ornamental $15.00, medicinal $25.00
    SetConsoleOutputCP(CP_UTF8);
    int tipoDePlanta = 0, cantidadDePlantas = 0;
    string tipoPlanta = "";
    cout<<"\n------------Sistema de pago del vivero------------\n";
    cout<<"Tenemos dos tipos de plantas:\n1. Ornamental - $15.00\n2. Medicinal - $25.00\n¿De qué tipo de planta llevará? ...";
    cin>>tipoDePlanta;
    cout<<"¿Cuántas plantas llevará? ...";
    cin>>cantidadDePlantas;
    if(tipoDePlanta==1){
        tipoPlanta = "ornamental";
    } else if(tipoDePlanta==2) {
        tipoPlanta = "medicinal";
    } else {
        tipoPlanta = "indefinido";
    }
    cout<<"\n------------Recibo------------\n";
    cout<<"Has elegido "<<cantidadDePlantas<<" plantas del tipo "<<tipoPlanta<<"\nEl total a pagar es: $"<<calcularPago(cantidadDePlantas, tipoDePlanta);
    return 0;
}

int calcularPago(int cantidad, int tipo){
    int totalPagar = 0;
    if(tipo == 1){
        totalPagar = (precioPlantaOrnamental*cantidad);
        return totalPagar;
    } else if (tipo == 2){
        totalPagar = (precioPlantaMedicinal*cantidad);
        return totalPagar;
    } else {
        cout<<"Has ingresado un tipo de planta no válido.";
        return 0;
    }
}