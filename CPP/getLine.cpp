#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    //Windows
    SetConsoleOutputCP(CP_UTF8);
    /*
        getline() permite capturar espacios en blanco. Es una función que requiere parámetros
        El cin no permite ingresar campos vacíos. getline no permite números, sólo cadenas (de texto) o char
    */
   // Variables
    string nombrePersona = "";
    cout<<"Ingrese su nombre: ";
    getline(cin, nombrePersona);
    cout<<"Hola "<<nombrePersona;

}