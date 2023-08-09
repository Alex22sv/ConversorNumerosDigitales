#include <iostream>
#include <windows.h>

using namespace std;

struct Ejemplo{
    int numero;
    double dec;
};
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Uso del typedef que sería como alias
    typedef int entero;
    typedef double decimal;
    entero a = 45;
    decimal b = 2.5;

    typedef struct Ejemplo ejemplo;
    ejemplo persona;

    return 0;
}