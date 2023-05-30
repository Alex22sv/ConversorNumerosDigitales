#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Crear un arreglo que almacene 3 autores y otro arreglo 3 libros
    string autores[3];
    string libros[3];
    int DimensionArreglo = sizeof(autores)/sizeof(string);
    for (int i = 0; i < DimensionArreglo; i++){
        string autor = "", libro = "";
        cout<<"Ingrese el nombre del autor #"<<i+1<<": ";
        cin>>autor;
        cout<<"Ingrese el nombre del libro #"<<i+1<<": ";
        cin>>libro;
        autores[i] = autor;
        libros[i] = libro;
        cout<<"Información almacenada.\n";
    }
    
    cout<<"\n----------------Impresión de datos----------------\n";
    for (int i = 0; i < DimensionArreglo; i++)
    {
        cout<<"Libro: "<<libros[i]<<" | Autor: "<<autores[i]<<"\n";
    }
    cout<<"\n------------------------------------------------\n";

    return 0;
}