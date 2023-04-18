#include <iostream>

using namespace std;

int main(){
    // Calcular el salario de una persona dependiendo de las horas trabajadas y el precio hora

    const int precioHora = 23;
    int cantidadHoras;
    float salario;
    string nombrePersona;
    cout<<"Ingrese su nombre: ";
    cin>>nombrePersona;
    cout<<"Ingrese la cantidad de horas trabajadas: ";
    cin>>cantidadHoras;

    // Intentemos usar NUlL
    if(nombrePersona == "" || cantidadHoras == 0){
        cout<<"No puedes dejar campos vacíos.";
        return 1;

    }

    if(cantidadHoras<=44){
        salario = cantidadHoras * precioHora;
    } else {
        salario = 44 * precioHora * 1.5 * (cantidadHoras - 44);
    }
    cout<<nombrePersona<<", su salario es: $"<<salario; 
    return 0;
}