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
    return 0;
}
