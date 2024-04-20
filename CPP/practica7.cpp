#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Función de Windows
    SetConsoleOutputCP(CP_UTF8);

    // Un inicio de sesión con 3 intentos usando do while o while
    
    // Declaración de variables y/o constantes
    const string usuario = "admin";
    const string contrasena = "1234";
    string inputUsuario, inputContrasena = "";
    int i = 0;
    cout<<"-------------------------\n¡Bienvenido al sistema!\n";
    while(i<3){
        cout<<"Ingrese su usuario: ";
        cin>>inputUsuario;
        cout<<"Ingrese su contraseña: ";
        cin>>inputContrasena;
        if(usuario==inputUsuario && contrasena==inputContrasena){
            cout<<"Usuario y contraseña correctos. Ha ingresado al sistema.";
            i=5;
        } else {
            i++;
            cout<<"Usuario o contraseña incorrectos. Le quedan "<<3-i<<" intentos.\n";
        }
    }
    cout<<"\n-------------------------\n";

    return 0;
}