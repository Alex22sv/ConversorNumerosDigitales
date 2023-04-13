// Se les llama directiva, el iostream siempre se incluye

// El iostream (i de input, o de output) (entrada y salida de datos)
#include <iostream>
// Por defecto todas las estructuras. std es la abreviación de "estándar",
//namespace es una palabra reservada que indica que usaremos bibliotecas. Lo veremos más adelante
using namespace std;
// Función principal del código. Si no es llamado dentro de main, no se ejecutará.
int main(){
    /*
    Tipos de datos:
        int (entero)
        char (1 caracter)
        string (múltiples caracteres)
        double (decimal que incluye 64 bits)
        float (decimal que incluye 32 bits)
    */
    // Definir una variable de tipo entero
    int numero;
    /*  
    SALIDA DE DATOS
        El cout no está dentro de la librería iostream, sino dentro del namespace std;
        Si quiero utilizar el cout (o cin) sin utililizar el namespace std hacemos lo siguiente:
        std::cout<<"Hello World!";
    */
    cout<<"Hello World";
    // Leer número
    cin>>numero;
    // Si regresa 0, suele conocerse como que se ejecutó con éxito.
    cout<<"El número ingresado fue " + to_string(numero);

    string totalPagar, PagoTotal, total_pagar;
    // Notación Camell
    totalPagar = "Hola";
    // Notación Pascal
    PagoTotal = "Hola amigos";
    // Notación snake_case
    total_pagar = "Hola mundo";
    // Es muy importante dejar el return 0, algunos sistemas operativos lo exigen.
    return 0;
}

/* 
Es muy importante utilizar nombres descriptivos al momento de asignar variables, funciones, etc.

*/