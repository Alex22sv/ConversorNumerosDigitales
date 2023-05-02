#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Función de Windows
    SetConsoleOutputCP(CP_UTF8);

    // Desea continuar
    bool continuar = 1;
    while (continuar == 1){
        int caso, preguntar, sumaMultiplesDeCinco, sumaDePares, sumaDeImpares = 0;
        cout << "-----------\nIngrese una de las siguientes opciones: \n1. Suma de múltiples de 5\n2. Suma de números pares\n3. Suma de números impares\n-----------";
        cin>>caso;    
        switch (caso){
            case 1:
                for (int i = 1; i <= 100; i++){
                    cout<<i;
                    if (i % 5 == 0){
                        sumaMultiplesDeCinco += i;
                    }
                }
                cout << "La suma de los números que son múltiples de 5 en un rango del 1 al 100 es: " << sumaMultiplesDeCinco;
                break;
            case 2:
                for (int i = 1; i <= 20; i++){
                    // Con sólo hacer un cambio, podemos obtener los números impares
                    // if(i!=0){
                    if (i % 2 == 0){
                        sumaDePares += i;
                    }
                }
                cout << "La suma de los números pares en un rango del 1 al 20 es: " << sumaDePares;
                break;
            case 3:
                for (int i = 1; i <= 30; i++)
                {
                    if (i % 2 != 0)
                    {
                        sumaDeImpares += i;
                    }
                }
                cout << "La suma de los números impares en un rango del 1 al 30 es: " << sumaDeImpares;
                break;
            default:
                cout << "La opción ingresada no es válida.";
                break;
        }
        cout<<"\n¿Desea continuar? 1. Sí | 2. No... ";
        cin>>preguntar;
        if(preguntar == 1){
            continuar = 1;
        } else if(preguntar == 2) {
            cout<<"Programa finalizado.";
            continuar = 0;
        } else {
            cout<<"Valor ingresado no válido. Finalizando el programa.";
            continuar = 0;
        }

    }

    return 0;
}