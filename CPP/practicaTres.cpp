#include <iostream>

using namespace std;

int main(){

    // Solicitar estado, si es 1 está encentido, si es 0 está apagado
    // Solicitar modelo, marca, año, estado, kilometrajeActual, kilometrajeInicial, distancia, tiempo, velocidad
    bool estadoVehiculo = 0;
    string modelo, marca;
    float kilometrajeActual, kilometrajeInicial, distancia, tiempo, velocidad;
    int anio;

    // Solicitar datos
    cout<<"¿El vehículo está encendido? Sí (1); No (0): ";
    cin>>estadoVehiculo;
    cout<<"Ingrese la marca del carro: ";
    cin>>marca;
    cout<<"Ingrese el modelo del carro: ";
    cin>>modelo;
    cout<<"Ingrese el año del carro: ";
    cin>>anio;
    cout<<"Ingrese el kilometraje inicial (en kilómetros): ";
    cin>>kilometrajeInicial;
    cout<<"Ingrese la distancia recorrida (en kilómetros): ";
    cin>>distancia;
    cout<<"Ingrese el tiempo recorrido (en horas): ";
    cin>>tiempo;
    // Calcular la velocidad (v=d/t)
    velocidad = distancia/tiempo;
    // Podemos usar endl para saltos de línea
    cout<<"La velocidad calculada es: "<<velocidad<<"km/h"<<endl;

    // Calcular la distancia (d=v*t)
    distancia = velocidad*tiempo;
    // Calcular el kilometraje (km+d)
    kilometrajeActual = kilometrajeInicial + distancia;
    cout<<"El kilometraje calculado es: "<<kilometrajeActual<<"km"<<endl;

    if(estadoVehiculo){
        // El vehículo está encendido
        cout<<"El vehículo está encendido."<<endl;
    } else{
        // El vehículo está apagado
        cout<<"El vehículo está apagado."<<endl;
    }

    if(kilometrajeActual>4000){
        cout<<"El vehículo requiere un cambio de aceite."<<endl;
    } else{
        cout<<"El vehículo todavía no requiere un cambio de aceite."<<endl;
    }

}