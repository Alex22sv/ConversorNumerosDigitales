#include <iostream>
#include <windows.h>
// Incluir librerías dentro de carpetas
#include "./matematica/matematica.hpp"

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int operacion, n1, n2 = 0;
    cout<<"Ingrese la operación";
    cin>>operacion;
    cout<<"Ingrese el primer valor: ";
    cin>>n1;
    cout<<"Ingrese el segundo valor: ";
    cin>>n2;
    switch (operacion){
    case 1:
        cout<<"El resultado de la suma es: "<<Suma(n1, n2);
        break;
    case 2:
        cout<<"El resultado de la resta es: "<<Resta(n1, n2);
        break;
    case 3:
        cout<<"El resultado de la multiplicación es: "<<Multiplicacion(n1, n2);
        break;
    case 4:
        cout<<"El resultado de la división es: "<<Division(n1, n2);
        break;
    default:
        break;
    }

    return 0;
}

/* 
    - El compilador sólo compila un archivo CPP si presionamos el botón de compilador
    - Para compilar múltiples archivos CPPp en un solo ejecutable, se abre una nueva terminal
    Comandos para compilar:
        - Archivos individuales: g++ archivo1.cpp archivo2.cpp -o nombreArchivoExe
        - Todos los archivos: g++ -c *.cpp -o nombreArchivoExe
    Otro caso, cuando se tienen librerías en subcarpetas
        - Comando: g++ principal.cpp ./nombreCarpeta/nombreArchivoDentroDeCarpeta.cpp -o nombreArchivoExe
*/