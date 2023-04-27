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
    float nota, promedio, suma = 0;
    for (int = 0; i<3; i++){
        cout<<"Ingrese su nota: ";
        cin>>nota;
        suma += nota;
    }
    promedio = suma/3;
    cout<<"El promedio es: "<<promedio;
    
    // Decremento
    for (i=5; i>0; i--){
        cout<<"\nHola Mundo\n";
    }

    // Calcule el factorial de un número
    int numeroFactorial = 0;
    int resultadoFactorial = 1;
    cout<<"Ingrese un número para calcular su factorial: ";
    cin>>numeroFactorial;
    for(i=numeroFactorial; i>0; i--){
        resultadoFactorial *= i; 
    }
    cout<<"El resultado del numero factorial de "<<numeroFactorial<<" es: "<<resultadoFactorial;


    // Sumar los números pares
    // Con el operador mod (%) podemos obtener el residuo 
    int finRango, sumaPares, residuoEntero = 0;  
    cout<<"Ingrese un número de rango que empieza por 1: ";
    cin>>finRango;
    for (i=1; i<=finRango; i++){
        residuoRango = i % 2;
        if(i==0){
            sumaPares += i;
        }
    }
    cout<<"El resultado de la suma de los números pares entre 1 y "<<finRango<<" es: "<<sumaPares;

    return 0;
}
