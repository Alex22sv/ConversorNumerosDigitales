#include <iostream>

using namespace std;

int main(){
    const float distancia = 150.0;
    const float horas = 3.0;
    float velocidad = 0;
    // Proceso
    velocidad = distancia/horas;   
    cout<<"La velocidad de un vehículo que ha recorrido 150km en 3 horas es: " << velocidad << "km/h.";

    const float hours = 2.0;
    const float speed = 60.0;
    float distance = 0;
    // Proceso
    distance = hours*speed;
    cout<<"La distancia recorrida por un vehículo que se ha desplazado durante 2 horas a una velocidad de 60 km/h es: " << distance << "km";
}