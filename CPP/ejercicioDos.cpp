#include <iostream>

using namespace std;

int main(){
    int n1 = 48;
    int n2 = 412;

    // Hay diferentes formas de definir las condicionales simples
    // Si no usamos las llaves {}, sólo podemos usar una línea

    // Caso 1
    if(n1 > n2)
        cout<<"n1 es mayor que n2";
    // Caso 2
    if(n2 > n1)
        cout<<"n2 es mayor que n1";
    else
        cout<<"n1 es mayor o igual a n1";
    return 0;
}