// Librerías
#include <iostream>
#include <windows.h>

using namespace std;

//Declaración de funciones
bool validarTransaccion(int cantidad, string tipo);
int retirarDinero(int cantidad);
int depositarDinero(int cantidad);
void imprimirRecibo(string nombre, string transaccion, int monto);

// Declaración de variables globales
string user = "alex", password = "1234";
int dineroEnCuenta = 1200;

int main(){
    // Banco esquizos
    // Función que permita mostrar los caracteres en la terminal
    SetConsoleOutputCP(CP_UTF8);

    // Definición de variables locales
    int intentos = 3, accion = 0, opcionRetiro = 0, cantidadRetiro = 0, cantidadDeposito = 0, preguntarImprimir = 0, otraTransaccion = 0;
    bool accesoValido = false;
    bool mantenerEnSistema = true;
    string userInput, passInput, nombreUsuario;
    while (intentos>=0) {
        cout<<"Ingrese su usuario: ";
        cin>>userInput;
        cout<<"Ingrese su contraseña: ";
        cin>>passInput;
        if((userInput==user)&&(passInput==password)){
            cout<<"¡Bienvenido al sistema!\n";
            intentos = -1;
            accesoValido = true;
        } else {
            intentos--;
            cout<<"Usuario o contraseña incorrectos. Le quedan "<<intentos<<" intentos.\n";
        }
    }
    if (accesoValido) { 
        /* Acceso al sistema */
        while (mantenerEnSistema){
            cout<<"\n----------- Banco esquizos -----------\n1. Retirar dinero\n2. Depositar dinero\n3. Salir del sistema\n--------------------------------------\nIngrese la opción: ";
            cin>>accion;
            switch (accion){
            case 1:
                // Retirar dinero
                cout<<"¿Cuánto dinero desea retirar?\n1. $5.00\n2. $10.00\n3. $20.00\n4. $50.00\n5. $100.00\n 6. Otra cantidad\nIngrese su opción: ";
                cin>>opcionRetiro;
                switch (opcionRetiro){
                case 1:
                    if(validarTransaccion(5, "retiro")){
                        cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<retirarDinero(5);
                        cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                        cin>>preguntarImprimir;
                        if(preguntarImprimir==1){
                            cout<<"Ingrese su nombre: ";
                            cin>>nombreUsuario;
                            imprimirRecibo(nombreUsuario, "Retiro", retirarDinero(5));
                        }
                    }
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                case 2:
                    if(validarTransaccion(10, "retiro")){
                        cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<retirarDinero(10);
                        cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                        cin>>preguntarImprimir;
                        if(preguntarImprimir==1){
                            cout<<"Ingrese su nombre: ";
                            cin>>nombreUsuario;
                            imprimirRecibo(nombreUsuario, "Retiro", retirarDinero(10));
                        }
                    }
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                case 3:
                    if(validarTransaccion(20, "retiro")){
                        cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<retirarDinero(20);
                        cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                        cin>>preguntarImprimir;
                        if(preguntarImprimir==1){
                            cout<<"Ingrese su nombre: ";
                            cin>>nombreUsuario;
                            imprimirRecibo(nombreUsuario, "Retiro", retirarDinero(20));
                        }
                    }
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                case 4: 
                    if(validarTransaccion(50, "retiro")){
                        cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<retirarDinero(50);
                        cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                        cin>>preguntarImprimir;
                        if(preguntarImprimir==1){
                            cout<<"Ingrese su nombre: ";
                            cin>>nombreUsuario;
                            imprimirRecibo(nombreUsuario, "Retiro", retirarDinero(50));
                        }
                    }
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                case 5:
                    if(validarTransaccion(100, "retiro")){
                        cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<retirarDinero(100);
                        cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                        cin>>preguntarImprimir;
                        if(preguntarImprimir==1){
                            cout<<"Ingrese su nombre: ";
                            cin>>nombreUsuario;
                            imprimirRecibo(nombreUsuario, "Retiro", retirarDinero(100));
                        }
                    }
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                case 6:
                    cout<<"¿Cuánto dinero desea retirar? $";
                    cin>>cantidadRetiro;
                    if(validarTransaccion(cantidadRetiro, "retiro")){
                        cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<retirarDinero(cantidadRetiro);
                        cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                        cin>>preguntarImprimir;
                        if(preguntarImprimir==1){
                            cout<<"Ingrese su nombre: ";
                            cin>>nombreUsuario;
                            imprimirRecibo(nombreUsuario, "Retiro", retirarDinero(cantidadRetiro));
                        }
                    }
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                default:
                    cout<<"Has ingresado una opción no válida.";
                    cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                    cin>>otraTransaccion;
                    if(otraTransaccion!=1){
                        mantenerEnSistema = false;
                    }
                    break;
                }
                break;
            case 2:
                // Depositar dinero
                cout<<"¿Cuánto dinero desea depositar? $";
                cin>>cantidadDeposito;
                if(validarTransaccion(cantidadDeposito, "deposito")){
                    cout<<"Transacción realizada. Su dinero en cuenta ahora es $"<<depositarDinero(cantidadDeposito);
                    cout<<"\n¿Desea imprimir su recibo? 1. Sí, 2. No \n......";
                    cin>>preguntarImprimir;
                    if(preguntarImprimir==1){
                        cout<<"Ingrese su nombre: ";
                        cin>>nombreUsuario;
                        imprimirRecibo(nombreUsuario, "Depósito", depositarDinero(cantidadRetiro));
                    }
                }
                cout<<"\n¿Desea realizar otra transacción? 1. Sí, 2. No\n...";
                cin>>otraTransaccion;
                if(otraTransaccion!=1){
                    mantenerEnSistema = false;
                }
                break;

            case 3:
                // Salir del sistema
                cout<<"Saliendo del sistema...";
                mantenerEnSistema = false;
                break;
            default:
                cout<<"Has ingresado una opción inválida. Inténtalo de nuevo.";
                break;
            }
        }
        
    } else {
        cout<<"Se ha quedado sin intentos, lo siento.";
    }
    
    return 0;
}

// Definición de funciones
bool validarTransaccion(int cantidad, string tipo){
    if(cantidad<=0){
        cout<<"No puede ingresar valores negativos o iguales a cero.";
        return false;
    }
    if((cantidad>dineroEnCuenta)&&(tipo=="retiro")){
        cout<<"Usted está intentando retirar más dinero de lo que tiene en la cuenta.";
        return false;
    }
    if((cantidad%5!=0)&&(tipo=="retiro")){
        cout<<"Sólo puede retirar cantidades que sean múltiples de 5.";
        return false;
    }
    return true;
}
int retirarDinero(int cantidad){
    int resultado = 0;
    resultado = dineroEnCuenta-cantidad;
    return resultado;
}

int depositarDinero(int cantidad){
    int resultado = 0;
    resultado = dineroEnCuenta+cantidad;
    return resultado;
}
void imprimirRecibo(string nombre, string transaccion, int monto){
    cout<<"\n----------- Banco esquizos -----------\nNombre: "<<nombre<<"\nTransacción: "<<transaccion<<"\nMonto: $"<<monto<<"\n--------------------------------------\n";
}