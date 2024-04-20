#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

// Declarar funciones
void LeerFichero();
void CrearFichero();
void ImprimirFichero();

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Creamos fichero
    cout<<"--Creamos fichero--\n";
    CrearFichero();
    // Imprimimos fichero
    cout<<"--Imprimimos fichero--\n";
    ImprimirFichero();

    return 0;
}

// Definir funciones
void LeerFichero(){

}
void CrearFichero(){
    /* Modos de apertura
        El componente ios es para irlo a buscar ahí
        in: archivo de lectura
        out: archivo de escritura
        app: agregar texto al final (no sobreescribe)
    */
    string nombre;
    ofstream fichero;
    fichero.open("Ejemplo.txt", ios::out | ios::app);
    if(!fichero.fail()){
        cout<<"Ingrese su nombre: ";
        cin>>nombre;
        fichero<<"Hola "<<nombre<<"!\n";
        fichero.close();
    } else {
        cout<<"Ocurrió un error al abrir el archivo de texto, lo siento.";
    }
    fichero.close();
}

void ImprimirFichero(){
    string texto;

    ifstream fichero;
    fichero.open("Ejemplo.txt", ios::in);
    if(!fichero.fail()){
        while (getline(fichero, texto)){
            cout<<texto<<"\n";
        }
        
    } else {
        cout<<"Ocurrió un error al abrir el archivo de texto, lo siento.";
    }
    fichero.close();
}