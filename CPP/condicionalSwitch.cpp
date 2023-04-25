#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    //Windows
    SetConsoleOutputCP(CP_UTF8);
    // Variables
    int opcion;
    float n1, n2, suma, resta, multiplicacion, division;

    cout<<"Ingrese una opción de operación: \n1. Suma\n2. Resta\n3. Multiplicación\n4. División\n...: ";
    cin>>opcion;
    if(opcion>0 || opcion<5){
        cout<<"Ingrese el primer valor: ";
        cin>>n1;
        cout<<"Ingrese el segundo valor: ";
        cin>>n2;
    }
    switch (opcion){
    case 1:
        suma = n1 + n2;
        cout<<"El resultado de la suma es: "<<suma;
        break;
    case 2:
        resta = n1 - n2;
        cout<<"El resultado de la resta es: "<<resta;
        break;
    case 3:
        multiplicacion = n1 * n2;
        cout<<"El resultado de la multiplicación es: "<<multiplicacion;
        break;
    case 4:
        if(n2 == 0){
            cout<<"¡No puedes dividir por cero!";
            return 1;
        }
        division = n1 / n2;
        cout<<"El resultado de la división es: "<<division;
        break;
    default:
        cout<<"Esa opción no existe.";
        break;
    }

    return 0;
}