#include <iostream>

using namespace std;

int main(){
    const int distancia = 150;
    const int horas = 3;
    float velocidad = 0;
    // Proceso
    velocidad = distancia/horas;   
    cout<<"La velocidad de un vehículo que ha recorrido 150km en 3 horas es: " << velocidad << "km/h.";

    const int hours = 2;
    const int speed = 60;
    float distance = 0;
    // Proceso
    distance = hours*speed;
    cout<<"La distancia recorrida por un vehículo que se ha desplazado durante 2 horas a una velocidad de 60 km/h es: " << distance << "km";
}