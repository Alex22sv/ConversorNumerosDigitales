#include <iostream>
#include <windows.h>

using namespace std;

// Dentro de una estructura no se llaman variables, sino campos (son miembros de la estructura)
struct Alumno{
    string name;
    //char name[25];
    int year;
    float grades[3];
} alumno1, alumno2; // Primer forma de crear variables de tipo struct

struct Libros{
    string autor;
    string titulo;
    int publicacion;
    string editores[2];
} libro[3];

int main(){
    // Determinar el tamaño en bytes de la estructura
    cout<<"El tamaño de la estructura es: "<<sizeof(Alumno)<<"\n"; // sumatorio de todos los tipos de datos
    // Opción 2 para declar variables de tipo struct
    struct Alumno alumno3;
    // Opción 3 para declarar variables de tipo struct
    Alumno alumno4;
    
    // Inicialización de estructuras
    alumno1.name = "Alex";
    alumno2.name = "Juan";
    alumno3.year = 2004;
    alumno1.year = 2005;
    alumno2.grades[0] = 9;
    alumno2.grades[1] = 10;
    
    // Otra forma de inicializar estructuras
    alumno4 = {
        "Alex",
        2005,
        {10, 8.5, 9.9}
    };
    
    // Imprimir
    cout<<alumno1.name<<" - "<<alumno1.year<<"\n\n";

    // Arreglos y estructuras
    for (int i = 0; i < 3; i++){
        cout<<"Ingrese el nombre del autor: ";
        cin>>libro[i].autor;
        cout<<"Ingrese el título: ";
        cin>>libro[i].titulo;
        cout<<"Ingrese la fecha de publicación: ";
        cin>>libro[i].publicacion;
        for (int j = 0; j < 2; j++){
            cout<<"Ingrese la editora #"<<j+1;
            cin>>libro[i].editores[j];
        }
        
        
    }
    
    return 0;
}
