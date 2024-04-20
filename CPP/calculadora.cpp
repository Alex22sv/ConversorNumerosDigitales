#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
    // Función para mostrar correctamente caracteres especiales en consolas de Windows
    SetConsoleOutputCP(CP_UTF8);
    // Definición de variables
    string menuMsg;
    bool errorMatematico;
    string errorMatematicoMsg = "";
    int option, cantidadValoresOperar, contador;
    double valorBase, valorExponente, resultado, valorOperacion;
   /* Mensaje de bienvenida */
   menuMsg = "-------------------------------\nBienvenido al menú de la calculadora.\n-------------------------------\nElija una de las siguientes operaciones:\n 1. Suma\n 2. Resta\n 3. Multiplicación\n 4. División\n 5. Potenciación\n-------------------------------: ";
   cout<<menuMsg;
   cin>>option;
   switch (option){
    case 1:
        // Suma
        cout<<"¿Cuántos valores quieres sumar? ";
        cin>>cantidadValoresOperar;
        contador = 0;
        resultado = 0;
        while(cantidadValoresOperar>contador){
            cout<<"Ingrese el valor #"<<++contador<<": ";
            cin>>valorOperacion;
            resultado += valorOperacion;
        }
        cout<<"El resultado de la suma de esos "<<contador<<" números es: "<<resultado;
        break;
    case 2:
        // Resta
        cout<<"¿Cuántos valores quieres restar? ";
        cin>>cantidadValoresOperar;
        contador = 0;
        resultado = 0;
        while(cantidadValoresOperar>contador){
            cout<<"Ingrese el valor #"<<++contador<<": ";
            cin>>valorOperacion;
            if(contador==1){
                resultado = valorOperacion;
            } else {
                resultado -= valorOperacion;
            }
        }
        cout<<"El resultado de la resta de esos "<<contador<<" números es: "<<resultado;
        break;
    case 3:
        // Multiplicación
        cout<<"¿Cuántos valores quieres multiplicar? ";
        cin>>cantidadValoresOperar;
        contador = 0;
        resultado = 0;
        while(cantidadValoresOperar>contador){
            cout<<"Ingrese el valor #"<<++contador<<": ";
            cin>>valorOperacion;
            if(contador==1){
                resultado = valorOperacion;
            } else {
                resultado *= valorOperacion;
            }
        }
        cout<<"El resultado de la multiplicación de esos "<<contador<<" números es: "<<resultado;
        break;
    case 4:
        // División
        cout<<"¿Cuántos valores quieres dividir? ";
        cin>>cantidadValoresOperar;
        contador = 0;
        resultado = 0;
        while(cantidadValoresOperar>contador){
            cout<<"Ingrese el valor #"<<++contador<<": ";
            cin>>valorOperacion;
            if(valorOperacion==0){
                errorMatematico = true;
                errorMatematicoMsg = "No es posible dividir entre cero.";
                contador=cantidadValoresOperar;
            }
            if(contador==1){
                resultado = valorOperacion;
            } else {
                resultado /= valorOperacion;
            }
        }
        if(errorMatematico){
            cout<<"\nError matemático: "<<errorMatematicoMsg<<"\n";
        } else {
            cout<<"El resultado de la división de esos "<<contador<<" números es: "<<resultado;
        }
        break;
    case 5:
        // Potenciación
        cout<<"¿Cuál es el valor de la base? ";
        cin>>valorBase;
        cout<<"¿Cuál es el valor del exponente? ";
        cin>>valorExponente;
        resultado = pow(valorBase, valorExponente);
        cout<<"El resultado de elevar el valor "<<valorBase<<" al exponente "<<valorExponente<<" es: "<<resultado;
        break;
    default:
        cout<<"Has ingresado una opción no válida :(";
        break;
    }
   
}