#include <iostream>
#include <windows.h>

using namespace std;

// Declaración de variables globales
float salarioFinal = 0.00;

// Declaración de funciones
float calculoSalario(float salario);
float calculoImpuesto(float salario);
int calculoTramo(float salarioResultante);

int main(){
    /* Función que reciba como parámetro el sueldo del empleado y retorne su sueldo con los descuentos ya aplicado según
    sea el tramo que le corresponda*/

    // Función de caracteres de Windows
    SetConsoleOutputCP(CP_UTF8);

    // Definición de variables
    float salarioIngresado = 0;


    cout<<"Ingrese su salario: $";
    cin>>salarioIngresado;
    cout<<"El salario resultante será: $"<<calculoSalario(salarioIngresado);
    return 0;
}

float calculoImpuesto(float salario){
    float impuesto = 0.00;
    impuesto = (salario - (salario*0.0625)-(salario*0.03));
    return impuesto;
}

int calculoTramo(float salarioResultante){
    if((salarioResultante>=0.01) && (salarioResultante<=472.00)){
        // I tramo
        return 1;

    } else if((salarioResultante>=472.01) && (salarioResultante<=895.24)) {
        // II tramo
        return 2;

    } else if((salarioResultante>=895.25) && (salarioResultante<=2038.10)){
        // III tramo
       return 3;

    } else if((salarioResultante>=2038.11)){
        // IV tramo
        return 4;

    } else {
        cout<<"Ha ingresado un salario no válido.";
        return 0;
    }
    return 0;

}

float calculoSalario(float salario){
    float salarioResultante = calculoImpuesto(salario);
    float impuestoFinal = 0;
    int tramo = calculoTramo(salarioResultante);
    if(tramo == 1){
        salarioFinal = salarioResultante;
    } else if(tramo == 2){
        impuestoFinal = (salarioResultante-472.00);
        impuestoFinal = (impuestoFinal*0.1)+17.67;
        salarioFinal = salarioResultante - impuestoFinal;
    } else if(tramo==3){
        impuestoFinal = (salarioResultante-895.24);
        impuestoFinal = (impuestoFinal*0.2)+60.00;
        salarioFinal = salarioResultante - impuestoFinal;
    } else if(tramo==4){
        impuestoFinal = (salarioResultante-2038.10);
        impuestoFinal = (impuestoFinal*0.3)+288.57;
        salarioFinal = salarioResultante - impuestoFinal;
    }
    return salarioFinal;       
}