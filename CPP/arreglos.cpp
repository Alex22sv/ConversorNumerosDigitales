#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Crear, declarar e inicializar un arreglo
    int arregloValores[4] = {3, 4, 1, 11};
    // Acceder a un valor por el índice
    cout<<"\nAcceder a un valor por el índice\n";
    cout<<arregloValores[0]<<" ";
    cout<<arregloValores[3]<<" ";
    // Modificar un valor de una posición
    cout<<"\nModificar un valor de una posición\n";
    arregloValores[3] = 8;
    cout<<arregloValores[3]<<" ";
    // Recorrer un arreglo-array
    cout<<"\nRecorrer un arreglo-array\n";
    for (int i = 0; i <=3; i++){
        cout<<arregloValores[i]<<" ";
    }
    // Recorrer un arreglo a la inversa
    cout<<"\nRecorrer un arreglo-array a la inversa\n";
    for (int i = 3; i>=0; i--){
        cout<<arregloValores[i]<<" ";
    }
    return 0;
}