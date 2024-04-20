#include <iostream>
#include <windows.h>

using namespace std;

int cantidadMayoresDeEdad(int edades[5]);

int main(){
    // Crear un arreglo unidimensional que almacene 5 edades
    // Soliciar los datos al usuario
    // Una función que calcule la cantidad de >=!8 y retorne la cantidad
    SetConsoleOutputCP(CP_UTF8);
    int edadesIngresadas[5];
    cout<<"\n----------Calcular la cantidad de personas que son mayor de edad----------\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingrese la edad de la persona #"<<i+1<<": ";
        cin>>edadesIngresadas[i];
    }
    cout<<"\nLa cantidad total de personas que son mayores de edad es: "<<cantidadMayoresDeEdad(edadesIngresadas);
    
    return 0;
}

int cantidadMayoresDeEdad(int edades[5]){
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        if(edades[i]>=18){
            total++;
        }
    }
    return total;
}