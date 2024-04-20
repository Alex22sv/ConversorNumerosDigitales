#include <iostream>
#include <windows.h>

using namespace std;

/* 
// Declaración de funciones
int maxNum(int arreglo[], int dim);
int minNum(int arreglo[], int dim);
// Declaración de variables globales
int DimensionArreglo = 0;
 */

int main(){
    // Encontrar el número más grande y el más bajo de un arreglo.

    SetConsoleOutputCP(CP_UTF8);
    int arreglo[6];
    int DimensionArreglo = sizeof(arreglo)/sizeof(int);
    for (int i = 0; i < DimensionArreglo; i++){
        int datoIngresado = 0;
        cout<<"Ingrese el dato #"<<i+1<<": ";
        cin>>datoIngresado;
        arreglo[i] = datoIngresado;
    }
    
    int maxNum = 0, minNum = 0;
    for (int i = 0; i <= DimensionArreglo; i++){
        if(maxNum<arreglo[i]){
            maxNum = arreglo[i];
        }
    }
    for (int i = 0; i <= DimensionArreglo; i++){
        if(maxNum>arreglo[i]){
            minNum = arreglo[i];
        }
    }
    cout<<"El número mayor es "<<maxNum<<" y el número menor es "<<minNum;
    /*     
    cout<<"El número mayor es "<<maxNum(arreglo[], DimensionArreglo)<<" y el número menor es "<<minNum(arreglo[], DimensionArreglo);
    */
    

    return 0;
}

/* 
// Definición de funciones
int maxNum(int arreglo[], int dim){
    int num = 0;
    for (int i = 0; i <= dim; i++){
        if(num<arreglo[i]){
            num = arreglo[i];
        }
    }
    return num;
}
int minNum(int arreglo[], int dim, int maxNumero){
    int num = maxNumero;
    for (int i = 0; i <= dim; i++){
        if(num>arreglo[i]){
            num = arreglo[i];
        }
    }
    return num;
} */