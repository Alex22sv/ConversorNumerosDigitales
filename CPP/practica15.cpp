#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Crear un arreglo que almacene 3 autores y otro arreglo 3 libros
    /* string ejemplo[3][2] = {
        {"autor1", "libro1"},
        {"autor2", "libro2"},
        {"autor3", "libro3"}
    }; */ 
    string librosyautores[3][2];
    for (int i = 0; i < 3; i++){
        string autor = "", libro = "";
        cout<<"Ingrese el nombre del autor #"<<i+1<<": ";
        cin>>autor;
        cout<<"Ingrese el nombre del libro #"<<i+1<<": ";
        cin>>libro;
        librosyautores[i][0] = autor;
        librosyautores[i][1] = libro;
        cout<<"Información almacenada.\n";
    }
    
    cout<<"\n----------------Impresión de datos----------------\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Autor: "<<librosyautores[i][0]<<" | Libro: "<<librosyautores[i][1]<<"\n";
        
    }
    cout<<"\n------------------------------------------------\n";

    return 0;
}