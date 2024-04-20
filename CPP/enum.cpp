#include <iostream>
#include <windows.h>

using namespace std;
enum operaciones {
    suma = 12, 
    resta, 
    multiplicacion
}; // Por defecto, si no asignamos un valor a estas constantes, entonces, empieza desde el cero.

int main(){
    SetConsoleOutputCP(CP_UTF8);
    enum operaciones op;
    op = suma;
    //cout<<"Usted ha seleccionado la suma.";
    switch (op){
    case 0:
        cout<<"Usted ha seleccionado la suma: "<<suma;
        break;
    case 1:
        cout<<"Usted ha seleccionado la resta: "<<resta;
        break;
    default:
        cout<<"Opción no válida.";
        break;
    }

    typedef enum operaciones enumeracion;

    return 0;
}
