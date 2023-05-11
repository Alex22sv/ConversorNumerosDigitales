#include <iostream>
#include <windows.h>
using namespace std;
// Función que imprima un saludo

// 1. Declaración
void Saludo();

int main(){
    SetConsoleOutputCP(CP_UTF8);

    // 3. Llamado 
    Saludo();
    return 0;
}

// 2. Definición
void Saludo(){
    cout<<"Buenos días queridos alumn@s!";
}