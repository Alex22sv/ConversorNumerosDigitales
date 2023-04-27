#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Función para mostrar caracteres especiales y con acentos en terminal
    SetConsoleOutputCP(CP_UTF8);

    // Suma el rango de valores del 1 al 5 al final multiplicar por 3
    int i = 1;
    int totalRango = 0;
    while(i<=5){
        totalRango += i;
        i++;
    }
    totalRango *= 3;
    cout<<"La suma de los primeros 5 números y multiplicado por 3 es: "<<totalRango;

    return 0;
}
