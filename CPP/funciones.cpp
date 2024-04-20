// Biblioteca externa, requiere de un include o using
/* 
    Ejemplos de funciones externas:
        - getline()
*/
#include <iostream>
#include <math.h>
#include <windows.h>
/* Podríamos incluir la librería de string, pero en las últimas actualizaciónes
se empieza a incluir en std */

/* una librería hay múltiples funciones */
using namespace std;

// 1. Declaración de la función o prototipo de la función
float Suma();
float Suma2(float x, float y);

int main(){

    SetConsoleOutputCP(CP_UTF8);

    // Biblioteca interna, no necesito usar un include de bibliotecas/librerías
    //sizeof(int);

    cout<<sizeof(int)<<"\n";
    
    // Librería math
    cout<<sqrt(9)<<"\n";
    float n1, n2;
    cout<<"Ingresa el primer valor: ";
    cin>>n1;
    cout<<"Ingresa el segundo valor: ";
    cin>>n2;
    // 3. Llamado de la función
    cout<<Suma()<<"\n";
    cout<<"La suma de esos dos números es: "<<Suma2(n1, n2)<<"\n";

    return 0;
}

// 2. Definición de la función
float Suma(){
    float total = 5 + 6;
    return total;
}
float Suma2(float x, float y){
    float total2 = x + y;
    return total2;
}

/* Es posible definir la función arriba del main, pero es más recomendado hacerlo después de la función main */