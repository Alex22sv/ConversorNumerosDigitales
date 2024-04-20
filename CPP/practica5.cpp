#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Windows
    SetConsoleOutputCP(CP_UTF8);
    // Constantes
    const int precioHora = 20;
    const int precioServicioProfesional = 10;
    // Variables
    int opcion = 0;
    float salario, cantidadHorasTrabajadas = 0;
    string nombrePersona;
    // Menú
    cout<<"\nIngrese una de nuestras opciones del menú: \n1.Tiempo completo en 40 horas.\n2.Tiempo completo con horas extra.\n3. Servicio profesional\n...: ";
    cin>>opcion;
    cout<<"Ingrese su nombre: ";
    cin>>nombrePersona;
    /* 
        Nota: en el flujograma de la presentación está al revés los casos 1 y 2.
        Las condicionales están invertidas, tomar en cuenta.
    */
    switch (opcion){
        case 1:
            cout<<"Ingrese la cantidad de horas trabajadas: ";
            cin>>cantidadHorasTrabajadas;
            if(cantidadHorasTrabajadas<40){
                salario = cantidadHorasTrabajadas * precioHora;
                cout<<nombrePersona<<", su salario es: $"<<salario;
            } else {
                cout<<nombrePersona<<", en esta opción no se puede calcular ese salario.";
                return 1;
            }
            break;
        case 2:
            cout<<"Ingrese la cantidad de horas trabajadas: ";
            cin>>cantidadHorasTrabajadas;
            if(cantidadHorasTrabajadas>=40){
                salario = (44)*(precioHora)+(1.5*precioHora)*(cantidadHorasTrabajadas-44);
                cout<<nombrePersona<<", su salario es: $"<<salario;
            } else {
                cout<<nombrePersona<<", en esta opción no se puede calcular ese salario.";
                return 1;
            }
            break;
        case 3:
            cout<<"Ingrese la cantidad de horas trabajadas: ";
            cin>>cantidadHorasTrabajadas;
            salario = cantidadHorasTrabajadas*precioServicioProfesional;
            cout<<nombrePersona<<", su salario es: $"<<salario;
            break;
        default:
            cout<<nombrePersona<<", esa opción ingresada no es válida.";
            break;
    }
    cout<<"\n-------------------------------";
}