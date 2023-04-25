#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Windows
    SetConsoleOutputCP(CP_UTF8);

    // Definir variables
    float n1, n2, n3, n4, n5, n6, kilometros, precio, dias = 0;

    // Leer dos números y deducir si están en orden creciente.
    cout<<"\nPráctica #1\n";
    cout<<"Ingrese un primer número cualquiera: ";
    cin>>n1;
    cout<<"Ingrese el segundo número cualquiera: ";
    cin>>n2;
    if(n1>n2){
        cout<<"El primer número es mayor que el segundo.";
    } else if(n1 == n2){
        cout<<"El primer número es igual al segundo.";
    } else {
        cout<<"El primer número es menor que el segundo.";
    }

    // Si un ángulo es igual a 90 grados, imprimir que es un ángulo recto
    cout<<"\nPráctica #2\n";
    cout<<"Ingrese un ángulo: ";
    cin>>n3;
    if(n3==90){
        cout<<"El ángulo es un ángulo recto.";
    } else {
        cout<<"El ángulo no es un ángulo recto.";
    }

    // Dados 3 números, deduzca el central.
    cout<<"\nPráctica #3\n";
    cout<<"Ingrese un primer número cualquiera: ";
    cin>>n4;
    cout<<"Ingrese un segundo número cualquiera: ";
    cin>>n5;
    cout<<"Ingrese un tercer número cualquiera: ";
    cin>>n6;
    /* 
        if(n4>n5>n6) es incorrecto, da el siguiente error:
        comparisons like 'X<=Y<=Z' do not have their mathematical meaning
        Ya que se toma como ((n4>n5)>n6), y el primer paréntesis lo toma como booleano, 
        por lo que luego se expresa como: true>n6
        Si lo dejamos de esta manera, da opción no válida.
    */
    if(n4 == n5 || n4 == n6 || n5 == n6){
        cout<<"Para este ejercicio no podemos tener números iguales.";
    } else if((n4>n5)&&(n5>n6)){
        cout<<"El número medio es: "<<n5;
    } else if((n6>n4)&&(n4>n5)){
        cout<<"El número medio es: "<<n4;
    } else if((n5>n6)&&(n6>n4)){
        cout<<"El númer)o medio es: "<<n6;
    } else if((n5>n4)&&(n4>n6)){
        cout<<"El número medio es: "<<n4;
    } else if((n6>n5)&&(n5>n4)){
        cout<<"El número medio es: "<<n5;
    } else if((n4>n6)&&(n6>n5)){
        cout<<"El número medio es: "<<n6;
    }  else if((n5>n4)&&(n4>n6)){
        cout<<"El número medio es: "<<n4;
    } else if((n6>n5)&&(n5>n4)){
        cout<<"El número medio es: "<<n5;
    } else {
        cout<<"Opción no definida. Error del programa.";
    }

    // Determinar el precio de ida y vuelta de un avión. Conociendo la distancia a recorrer y sabiendo que si el número de días
    // de estancia es superior a 7 días y la distancia superior a 800km el billete tiene una reducción del 30%. El precio por
    // km es de 2.5 euros.
    cout<<"\nPráctica #4\n";
    cout<<"¿Cuántos kilómetros volará? ";
    cin>>kilometros; 
    cout<<"¿Cuántos días se quedará en ese lugar? ";
    cin>>dias;
    precio = 2.5*kilometros;
    if(dias>7 && kilometros>800){
        precio = precio*0.70;
    }
    cout<<"El precio a pagar es: "<<precio<<" euros.";
}