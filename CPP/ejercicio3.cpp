#include <iostream>
#include <windows.h>
using namespace std;
// Función que imprima un saludo

// 1. Declaración
void Saludo();
int Resta();
int Resta(int x, int y, int z);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n1, n2, n3;
    // 3. Llamado 
    Saludo();
    cout<<Resta()<<"\n";
    // a continuación tenemos valores quemados, porque nosotros los ponemos, no el usuario.
    cout<<Resta(12, 4, 6)<<"\n";
    
    cout<<"Ingrese un número: ";
    cin>>n1;
    cout<<"Ingrese otro número: ";
    cin>>n2;
    cout<<"Ingrese otro número: ";
    cin>>n3;
    cout<<"El resultado de la resta es: "<<Resta(n1, n2, n3)<<"\n";
    return 0;
}

// 2. Definición
void Saludo(){
    cout<<"Buenos días queridos alumn@s!\n";

}
int Resta(){
    int resultado = 12 - 8;
    return resultado;
}
int Resta(int x, int y, int z){
    int total = x - y - z;
    return total;
}