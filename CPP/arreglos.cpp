#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // Crear, declarar e inicializar un arreglo
    int arregloValores[4] = {3, 4, 1, 11};
    // Acceder a un valor por el índice
    cout<<"\nAcceder a un valor por el índice\n";
    cout<<arregloValores[0]<<" ";
    cout<<arregloValores[3]<<" ";
    // Modificar un valor de una posición
    cout<<"\nModificar un valor de una posición\n";
    arregloValores[3] = 8;
    cout<<arregloValores[3]<<" ";
    // Recorrer un arreglo-array
    cout<<"\nRecorrer un arreglo-array\n";
    for (int i = 0; i <=3; i++){
        cout<<arregloValores[i]<<" ";
    }
    // Recorrer un arreglo a la inversa
    cout<<"\nRecorrer un arreglo-array a la inversa\n";
    for (int i = 3; i>=0; i--){
        cout<<arregloValores[i]<<" ";
    }

    // Obtener el tamaño de arreglos en bytes y la cantidad de elementos
    cout<<"\nObtener el tamaño de arreglos en bytes y la cantidad de elementos\n";
    // int MiPrimerArreglo[] = {12, 42, 5, 7, 8112};
    int MiPrimerArreglo[5];
    int DimensionArreglo = sizeof(MiPrimerArreglo)/sizeof(int);

    // Solicitar los datos
    for (int i = 0; i < DimensionArreglo; i++){
        int input = 0;
        cout<<"Ingrese el número #"<<i+1<<": ";
        cin>>input;
        MiPrimerArreglo[i] = input;
    }
    cout<<"\nNúmeros pares y su posición\n";   
    for (int i = 0; i < DimensionArreglo; i++){
        if(MiPrimerArreglo[i]%2 == 0){
            cout<<"Número: "<<MiPrimerArreglo[i]<<" | Posición: "<<i<<"\n"; 
        }
    }
    
    cout<<"\nArreglos bidimensionales\n";
    // Arreglos bidimensionales
    int arreglobidim[2][4] = {
        {1, 3, 4, 5},
        {6, 7, 8, 9}
    };
    // Cambiar el valor 
    arreglobidim[0][0] = 12;
    for (int i = 0; i < 2; i++)
    {
        cout<<endl;
        for (int j = 0; j < 4; j++)
        {
            cout<<arreglobidim[i][j]<<" ";
        }
        
    }
    
    
    return 0;
}