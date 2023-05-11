// El valor del descuento será 35% del salario

#include <iostream>
#include <windows.h>

using namespace std;

// Parámetros formales
float CalculoSalario(float salario);

/* ¿Es posible tener 2 funciones con el mismo nombre?
R// Sí, pero lo que va a cambiar son los parámetros.
No puedes tener dos funciones con el mismo nombre sin parámetros
Sí puedes tener dos funciones con el mismo nombre, una con parámetros y la otra no
Se le llama "sobrecarga de parámetros" cuando tienes más de 1 función con el mismo nombre y que varía en cantidad de parámetros.
 */

int main(){
    SetConsoleOutputCP(CP_UTF8);
    float valorIngresado = 0;

    cout<<"Ingrese su salario: $";
    cin>>valorIngresado;
    // Parámetros actuales/reales
    cout<<"El valor que le quitarán de la AFP es $"<<CalculoSalario(valorIngresado);
    return 0;
}


float CalculoSalario(float salario){
    float total = salario * 0.35;
    return total;
}