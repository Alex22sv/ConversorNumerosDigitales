#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Windows
    SetConsoleOutputCP(CP_UTF8);
    // Imprimir 3 holas
    for(int i = 0; i < 3; i++){
        cout<<"Hola\n";
    }

    // Sumar los primeros 5 números
    int suma = 0;
    //       start  stop   step
    for (int i = 1; i <= 5; i++){
        // suma = suma + i;
        suma += i;
    }
    cout<<"La suma de los primeros 5 números es: "<<suma<<"\n";
    
    // Calcular el promedio de 3 notas
    float nota, promedio, sumaprom = 0;
    for (int i = 0; i<3; i++){
        cout<<"Ingrese su nota: ";
        cin>>nota;
        sumaprom += nota;
    }
    promedio = sumaprom/3;
    cout<<"El promedio es: "<<promedio;
    
    // Decremento
    for (int i=5; i>0; i--){
        cout<<"\nHola Mundo\n";
    }

    // Calcule el factorial de un número
    int numeroFactorial = 0;
    int resultadoFactorial = 1;
    cout<<"Ingrese un número para calcular su factorial: ";
    cin>>numeroFactorial;
    for(int i=numeroFactorial; i>0; i--){
        resultadoFactorial *= i; 
    }
    cout<<"El resultado del numero factorial de "<<numeroFactorial<<" es: "<<resultadoFactorial;


    // Sumar los números pares
    // Con el operador mod (%) podemos obtener el residuo 
    int finRango, sumaPares, sumaImpares, residuoEntero = 0;  
    cout<<"\nIngrese un número de rango que empieza por 1: ";
    cin>>finRango;
    for (int i=1; i<=finRango; i++){
        residuoEntero = i % 2;
        // Con sólo hacer un cambio, podemos obtener los números impares
        // if(i!=0){
        if(residuoEntero==0){
            sumaPares += i;
        } else {
            sumaImpares += i;
        }
    }
    cout<<"El resultado de la suma de los números pares entre 1 y "<<finRango<<" es: "<<sumaPares;
    cout<<"\nEl resultado de la suma de los números impares entre 1 y "<<finRango<<" es: "<<sumaImpares;

    return 0;
}
