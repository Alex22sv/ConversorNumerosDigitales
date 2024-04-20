#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

struct Persona {
    string nombre;
    string telefono[2];

}persona[3];

// Declaración de funciones
void CrearFichero();
void ImprimirFichero();
void SolicitarDatos();

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Crear fichero
    CrearFichero();

    return 0;
}

void CrearFichero(){
    ofstream fichero;
    fichero.open("Practica21.txt", ios::out | ios::app);
    if(!fichero.fail()){
        SolicitarDatos();
        for (int i = 0; i < 3; i++){
            fichero<<"\n-----Datos de la persona "<<i+1<<"-----\n";
            fichero<<"Nombre: "<<persona[i].nombre<<"\n";
            for (int j = 0; j < 2; j++){
                fichero<<"Teléfono #"<<j+1<<": "<<persona[i].telefono[j]<<"\n";
            }
            
        }
    } else {
        cout<<"No se logró abrir el archivo, lo siento.";
    }
    fichero.close();
}
void ImprimirFichero(){

}
void SolicitarDatos(){
    for (int i = 0; i < 3; i++){
        cout<<"Ingrese su nombre: ";
        cin>>persona[i].nombre;
        for (int j = 0; j < 2; j++){
            cout<<"Ingrese su número de teléfono #"<<j+1<<": ";
            cin>>persona[i].telefono[j];
        }
        
    }   
}