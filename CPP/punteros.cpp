#include <iostream>
#include <windows.h>

using namespace std;

// Paso de parámetro por valor
void Funcion1(int a);
// Paso de parámetro por referencia
void Funcion2(int &a);
// Paso de parámetro por dirección
void Funcion3(int *p);

struct Ejemplo {
    int a;
    int b;
    float c;
} ejemplo, *ptr_ejemplo;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    /* 
        El tipo de dato void para punteros permite asignar punteros con diferente tipo de dato

    */
    
    int i; // Declarar a una variable i
    int *p, *q, *r; // Declarar un puntero a un entero p
    //p = nullptr;
    p = &i; // Asignar la dirección de i a p
    cout<<p<<"\n";
    *q = 85;
    cout<<*q<<"\n"; // Result: 85
    
    // Paso de parámetro por valor
    cout<<"Paso de parámetro por valor\n";
    int j = 45;
    cout<<j<<"\n";
    Funcion1(j);
    cout<<j<<"\n";
    // Paso de parámetro por referencia
    cout<<"Paso de parámetro por referencia\n";
    int k = 45;
    cout<<k<<"\n"; 
    Funcion2(k);
    cout<<k<<"\n";
    // Paso de parámetro por dirección
    cout<<"Paso de parámetro por dirección\n";
    int l = 45;
    cout<<l<<"\n"; 
    Funcion3(&l);
    cout<<l<<"\n";

    // Estructuras
    cout<<"Estructuras\n";
    struct Ejemplo ejemplo2;
    struct Ejemplo *ptr_ejemplo2;

    ptr_ejemplo = &ejemplo;
    // Acceder a un miembro de la estructura
    // Sin puntero
    ejemplo.a = 45;
    // Con puntero (solo es usar -> para acceder a miembros de una estructura cuando se tiene punteros)
    ptr_ejemplo->a = 45;
    ptr_ejemplo->b = 65;
    ptr_ejemplo->c = 1.5;
    cout<<ptr_ejemplo->a<<"\n";
    cout<<ptr_ejemplo->b<<"\n";
    cout<<ptr_ejemplo->c<<"\n";
    cout<<ptr_ejemplo<<"\n"; // Imprimir la dirección de memoria de la estructura
    cout<<&(ptr_ejemplo->a)<<"\n";
    cout<<&(ptr_ejemplo->b)<<"\n";
    cout<<&(ptr_ejemplo->c)<<"\n";
    return 0;
}

void Funcion1(int a){
    cout<<a+10<<"\n";
}
void Funcion2(int &a){
    a = 15;
    cout<<a<<"\n";
}
void Funcion3(int *p){
    *p = 20;
    cout<<*p<<"\n";
}