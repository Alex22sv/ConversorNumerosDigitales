#include <iostream>
#include <math.h>
using namespace std;

int main(){
    /* Tipos de datos */
    /* 
        sizeof() es una función por defecto que permite obtener el tamaño en bytes de un parámetro 
        String no, es un objeto.
    */
    cout<<sizeof(double);

    /* Tipos de operadores */
    /* 
        Operadores de asignación: 
        Operadores lógicos:
        Operadores relacionales:
        Operadores aritméticos: ++, --, +, -, *, /, %
        Operadores de dirección: * (indirección) y & (dirección)
    */

    // La función pow() es de exponenciación
/*     int operacion;
    operacion = (-4*7)+((pow(2, 3))/4)-5;
    cout<<"El resultado de la operación sin agrupación con paréntesis es: " + to_string(operacion); */

   /*  Programa que solicite un número o una letra */

    // Declaración de variables
    float var1;
    int var2;
    double var3;
    char var4;
    // Inicializar variables es agregarle un valor a una variable
    /* Es recomendable cuando se declaran variables con números que se inicialicen en 0 */
    var1 = 2.5;

    cout<<"Ingrese un número: ";
    cin>>var2;
    // Mejor forma de concatenar diferentes tipos de datos:
    cout<<"El valor ingresado fue: " << var2;

    /* Constantes */
    /* 
        Las constantes no cambian de valor en ningún momento.
        * Constante literal *
        Nosotros mismos asignamos el valor a la constante.
        var1 = 1.5;
        * Constante definida *
        La constante literal tiene un tipo de dato. La constante definida no tiene tipo de dato.
        #define pi 3.14.16;
        * Constante enumerada *

        * Constante declarada *
        const float precioValor = 12.99;
    */


    return 0;
}   