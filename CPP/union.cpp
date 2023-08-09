#include <iostream>
#include <windows.h>

using namespace std;

/* La unión se puede crear dentro y fuera del main */
union Conjunto{
    int a;
    double b;
    /* Cada elemento utiliza la misma dirección de memoria */
} conjunto1;
// El peso total de la unión será el peso de

struct Persona{
    int peso; // 4 bytes
    float estructura; // 4 bytes
    char a; // 1 byte
    double h; // 8 bytes
};
// El peso total de la estructura será la sumatoria de bytes de cada miembro, sin embargo,
// no puede dar 9 bytes, los toma como grupos de 4 bytes, por eso el char daría 4 bytes

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Acceder a los miembros de la unión
    conjunto1.a = 25;
    cout<<conjunto1.a<<endl;
    conjunto1.b = 1.4;
    cout<<conjunto1.b<<endl;
    cout<<conjunto1.a<<endl; // Ahora tiene un valor basura
    cout<<&(conjunto1.a)<<endl;
    cout<<&(conjunto1.b)<<endl;
    return 0;
}