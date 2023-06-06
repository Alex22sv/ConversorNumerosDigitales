#include <iostream>
#include <windows.h>

using namespace std;

// Dentro de una estructura no se llaman variables, sino campos (son miembros de la estructura)
struct Alumno{
    // string nombre;
    char name[25];
    int year;
    float grades;
};

int main(){
    sizeof(Alumno); // sumatorio de todos los tipos de datos
    return 0;
}