// Librerías
#include <iostream>
#include <windows.h>

// Espacio
using namespace std;

// Declaración de funciones

// Esta función permite mostrar los productos al usuario.
// Dependiendo del sabor elegido se le mostrará un menú de tamaños de los sorbetes.
void imprimirProductos();
// Calcular el total a pagar pidiendo el sabor, el tamaño y la cantidad de sorbetes| a llevar
float calcularTotalPagar(int sabor, int tipo, int cantidad);

// Declaración de variables globales
bool mantenerEnSistema = true;
bool comprarProducto = true;

// Función principal
int main(){
    // Función de librería externa que permite mostrar caracteres especiales y acentos en la terminal
    SetConsoleOutputCP(CP_UTF8);
    // Declaración de variables locales
    int decisionVerMenu = 0, decisionComprarProducto = 0, decisionMantenerSistema = 0, elegirSabor = 0, elegirTipo = 0, elegirCantidad = 0;
    cout<<"Bienvenido al nuevo sistema de la sorbetería.";
    // Mantener al usuario en el sistema si quiere repetir procesos
    while(mantenerEnSistema){
        cout<<"\n¿Deseas ver nuestro menú? \n1. Sí\n2. No\n...";
        cin>>decisionVerMenu;
        if(decisionVerMenu == 1){
            imprimirProductos();
        } else {
            cout<<"¿Deseas salir del sistema? \n1. Sí\n2. No\n...";
            cin>>decisionMantenerSistema;
            if(decisionMantenerSistema == 1){
                mantenerEnSistema = false;
                cout<<"De acuerdo, saliendo del sistema...";
                return 0;
            } else {
                mantenerEnSistema = true;
            }  
        }
        
        cout<<"¿Deseas comprar un producto?\n1. Sí, deseo comprar un producto.\n2. No, deseo salir del sistema.\nElige la opción: ";
        cin>>decisionComprarProducto;
        if(decisionComprarProducto == 1){
            mantenerEnSistema = true;
            cout<<"De acuerdo. Con el menú de sabores mostrado anteriormente, ¿qué sabor escoges? ";
            cin>>elegirSabor;
            switch (elegirSabor){
                case 1:
                    cout<<"¿Qué tamaño del sabor chocolate eliges? ";
                    cin>>elegirTipo;
                    cout<<"¿Cuántos desea llevar? ";
                    cin>>elegirCantidad;
                    cout<<"El total a pagar es: $"<<calcularTotalPagar(elegirSabor, elegirTipo, elegirCantidad)<<"\n";
                    break;
                case 2:
                    cout<<"¿Qué tamaño del sabor napolitano eliges? ";
                    cin>>elegirTipo;
                    cout<<"¿Cuántos desea llevar? ";
                    cin>>elegirCantidad;
                    cout<<"El total a pagar es: $"<<calcularTotalPagar(elegirSabor, elegirTipo, elegirCantidad)<<"\n";
                    break;
                case 3:
                    cout<<"¿Qué tamaño del sabor pistacho eliges? ";
                    cin>>elegirTipo;
                    cout<<"¿Cuántos desea llevar? ";
                    cin>>elegirCantidad;
                    cout<<"El total a pagar es: $"<<calcularTotalPagar(elegirSabor, elegirTipo, elegirCantidad)<<"\n";
                    break;
                default:
                    cout<<"Has elegido una opción no válida.\n";
                    break;
            }
            cout<<"¿Deseas salir del sistema? \n1. Sí\n2. No\n...";
            cin>>decisionMantenerSistema;
            if(decisionMantenerSistema == 1){
                mantenerEnSistema = false;
                cout<<"De acuerdo, saliendo del sistema...";
            } else {
                mantenerEnSistema = true;
            }
        } else {
            cout<<"De acuerdo, saliendo del sistema...";
            mantenerEnSistema = false;
        }
    }
    return 0;
}
// Definición de funciones
void imprimirProductos(){
    int elegirSabor = 0;
    cout<<"\n-------Menú de sabores-------\n";
    cout<<"1. Chocolate\n2. Napolitano\n3. Pistacho\n";
    cout<<"¿Qué sabor te llama la atención? ";
    cin>>elegirSabor;
    if(elegirSabor == 1){
        cout<<"Has elegido el sabor de chocolate. Te presentamos nuestra variedad de tamaños: \n";
        cout<<"1. Paletas - $1.00\n2. Conos - $0.50\n3. Vaso - $1.50\n\n";
    } else if(elegirSabor == 2){
        cout<<"Has elegido el sabor de napolitano. Te presentamos nuestra variedad de tamaños: \n";
        cout<<"1. Paletas - $1.25\n2. Conos - $0.75\n3. Vaso - $1.75\n\n";
    } else if(elegirSabor == 3){
        cout<<"Has elegido el sabor de pistacho. Te presentamos nuestra variedad de tamaños: \n";
        cout<<"1. Paletas - $1.50\n2. Conos - $0.50\n3. Vaso - $1.50\n\n";
    } else {
        cout<<"Has elegido una opción no válida. Inténtalo de nuevo.";
    }
}
float calcularTotalPagar(int sabor, int tipo, int cantidad){
    string nombreSabor = "", tipoSabor = "";
    float precioTipo = 0.00, totalPagar = 0.00;
    switch (sabor){
        case 1:
            nombreSabor = "chocolate";
            switch (tipo){
                case 1:
                    tipoSabor = "paleta";
                    precioTipo = 1.00;
                    break;
                case 2:
                    tipoSabor = "cono";
                    precioTipo = 0.50;
                    break;
                case 3:
                    tipoSabor = "vaso";
                    precioTipo = 1.50;
                    break;
                default:
                    cout<<"Has elegido una opción no definida.\n";
                    return 0;
                    break;
            }
            break;
        case 2:
            nombreSabor = "napolitano";
            switch (tipo){
                case 1:
                    tipoSabor = "paleta";
                    precioTipo = 1.25;
                    break;
                case 2:
                    tipoSabor = "cono";
                    precioTipo = 0.75;
                    break;
                case 3:
                    tipoSabor = "vaso";
                    precioTipo = 1.75;
                    break;
                default:
                    cout<<"Has elegido una opción no definida.\n";
                    return 0;
                    break;
            }
            break;
        case 3:
            nombreSabor = "pistacho";
            switch (tipo){
                case 1:
                    tipoSabor = "paleta";
                    precioTipo = 1.50;
                    break;
                case 2:
                    tipoSabor = "cono";
                    precioTipo = 0.50;
                    break;
                case 3:
                    tipoSabor = "vaso";
                    precioTipo = 1.50;
                    break;
                default:
                    cout<<"Has elegido una opción no definida.\n";
                    return 0;
                    break;
            }
            break;
        default:
            cout<<"Has elegido una opción no definida.\n";
            return 0;
            break;
    }
    cout<<"Has elegido "<<cantidad<<" "<<tipoSabor<<"s con sabor a "<<nombreSabor<<"\n";
    totalPagar = cantidad*precioTipo;
    if(totalPagar>=3.5){
        return totalPagar;
    } else {
        cout<<"El monto mínimo de compra es de $3.50. Si deseas comprar, agrega más productos.\n";
        return 0;
    }
    

}