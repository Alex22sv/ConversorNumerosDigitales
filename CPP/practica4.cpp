#include <iostream>
#include <windows.h>
using namespace std;

// Variables globales
float cantidadHoras;

int main(){
    // Función para mostrar correctamente caracteres especiales en consolas de Windows
    SetConsoleOutputCP(CP_UTF8);
    // Calcular el salario de una persona dependiendo de las horas trabajadas y el precio hora

    const int precioHora = 23;
    const int precioHoraExtra = 30;
    // Variables locales
    float salario, cantidadHorasExtra, salarioHorasExtra = 0;
    string nombrePersona;
    bool horasExtra = 0;
    cout<<"Ingrese su nombre: ";
    cin>>nombrePersona;
    cout<<"Ingrese la cantidad de horas trabajadas: ";
    cin>>cantidadHoras;

    // Posibles funciones que podemos utilizar para verificar los tipos de datos: isalpha(), isdigit(), isnum()

    // Intentemos usar NULL, con false podemos revisar si el valor es válido.
    if(nombrePersona == "" || cantidadHoras == false){
        cout<<"Has ingresado valores no válidos.";
        return -1;
    } else if(cantidadHoras<0){
        cout<<"Has ingresado una cantidad de horas no válidas.";
        return -1;
    } else if(cantidadHoras<=44){
        salario = cantidadHoras * precioHora;
    } else {
        salario = 44 * precioHora * 1.5 * (cantidadHoras - 44);
    }
    cout<<"¿Ha realizado horas extra? 1.Sí 0.No: ";
    cin>>horasExtra;
    if(horasExtra){
        cout<<"¿Cuántas horas extra ha realizado? ";
        cin>>cantidadHorasExtra;
        salarioHorasExtra = cantidadHorasExtra*precioHoraExtra;
    }
    cout<<nombrePersona<<", su salario es: $"<<salario;
    if(horasExtra){
        cout<<"\n"<<nombrePersona<<", su salario por horas extras es: $"<<salarioHorasExtra;
    } 
    return 0;
}
