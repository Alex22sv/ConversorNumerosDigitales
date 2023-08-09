#include <iostream>
#include <String>
#include <fstream>
#include <ctime>
using namespace std;

struct pelicula
{
    string ISBM;
    string nombre;
    string director;
    int duracion; // en minutos
};
void agregar();
void leer();
void buscar();
void eliminar();
int main()
{
      time_t now;
    struct tm nowLocal;
    now=time(NULL);
    nowLocal=*localtime(&now);
    bool continuar = true;
    int op = 0;
    do
    {
        cout << "MENU" << endl;
        cout << "==========" << endl;
        cout << "1-Buscar registro por ISBM" << endl;
        cout << "2-Eliminar registro por ISBM" << endl;
        cout << "3-Agregar registro por ISBM" << endl;
        cout << "4-Leer archivo completo" << endl;
        cout << "5-Salir" << endl;
        cout<< "6-Bonus(crear archivo con formato dd/mm/yyyy"<<endl;
        cout << "=========="<<endl;
        cout<<"Digita tu opcion:"<<endl;
        cin >> op;
        switch (op)
        {
        case 1:
            buscar();
            break;
        case 2:
            eliminar();
            break;
        case 3:
            agregar();
            break;
        case 4:
            leer();
            break;
        case 5:
            continuar = false;
            break;
        case 6:
            
            string nombre_archivo2 =to_string(nowLocal.tm_mday)+"-"+to_string(nowLocal.tm_mon+1)+"-"+to_string(nowLocal.tm_year+1900)+".txt"; 
            cout<<nombre_archivo2;
            ofstream archivo2 {nombre_archivo2};
        }
    } while (continuar);
    return 0;
}
void eliminar()
{
    // leer para obtener la cantidad de peliculas
    string nombre_archivo = "peliculas.txt", duracion, ISBM, nombre, director;
    ifstream archivo(nombre_archivo.c_str()), archivoeliminado(nombre_archivo.c_str());
    ;
    string linea, isbm;
    bool encontrado = false, noencontrado = true;
    int contador = 1, longitud = 0;
    cout << "Ingresa el ISBM a eliminar: ";
    cin >> isbm;
    // buscar longitud y buscar dato
    while (getline(archivo, linea))
    {
        switch (contador)
        {
        case 1:
            if (isbm == linea)
            {
                encontrado = true;
                noencontrado = false;
            }
            contador++;
            longitud++;
            break;
        case 2:
            contador++;
            break;
        case 3:
            contador++;
            break;
        case 4:
            contador = 1;
            encontrado = false;
            break;
        }
    }
    if (noencontrado)
    {
        cout << "No se encontro la pelicula" << endl;
        return;
    }
    pelicula peliculas[longitud - 1];
    bool eliminado = false;
    int posicion = 0;
    contador = 1;
    // llenar objeto con la información a guardar
    while (getline(archivoeliminado, linea))
    {
        switch (contador)
        {
        case 1:
            if (isbm == linea)
            {
                eliminado = true;
            }
            else
            {
                peliculas[posicion].ISBM = linea;
            }
            contador++;
            break;
        case 2:
            if (!eliminado)
            {
                peliculas[posicion].nombre = linea;
            }
            contador++;
            break;
        case 3:
            if (!eliminado)
            {
                peliculas[posicion].director = linea;
            }
            contador++;
            break;
        case 4:
            if (!eliminado)
            {
                peliculas[posicion].duracion = stoi(linea);
                posicion++;
            }
            eliminado = false;
            contador = 1;
            break;
        }
    }
    // Reemplazar en el txt actual
    ofstream archivo1;
    string nombre_archivo_eliminar = "peliculas.txt";
    for (int i = 0; i < longitud - 1; i++)
    {
        //sobreescribimos lo que tenemos y agregamos el primer registro
        if (i == 0)
        {
            archivo1.open(nombre_archivo_eliminar.c_str(), fstream::out);
        }
        else
        {
            // agrega contenido al txt sin sobreescribir
            archivo.open(nombre_archivo_eliminar.c_str(), fstream::app);
        }
        archivo1 << peliculas[i].ISBM << endl;
        archivo1 << peliculas[i].nombre << endl;
        archivo1 << peliculas[i].director << endl;
        archivo1 << peliculas[i].duracion << endl;
    }
    cout << "Eliminado correctamente"<<endl;
}
void buscar()
{
    string nombre_archivo = "peliculas.txt", duracion, ISBM, nombre, director;
    ifstream archivo(nombre_archivo.c_str());
    string linea, isbm;
    bool encontrado = false, noencontrado = true;
    int contador = 1;
    cout << "Ingresa el ISBM a buscar: ";
    cin >> isbm;
    while (getline(archivo, linea))
    {
        switch (contador)
        {
        case 1:
            if (isbm == linea)
            {
                encontrado = true;
                noencontrado = false;
                cout << "ISBM: " << linea << " , ";
            }
            contador++;
            break;
        case 2:
            if (encontrado)
            {
                cout << "Nombre: " << linea << " , ";
            }
            contador++;
            break;
        case 3:
            if (encontrado)
            {
                cout << "Director: " << linea << " , ";
            }
            contador++;
            break;
        case 4:
            if (encontrado)
            {
                cout << "Duracion: " << linea << endl;
            }
            contador = 1;
            encontrado = false;
            break;
        }
    }
    if (noencontrado)
    {
        cout << "No se encontro la pelicula" << endl;
    }
}
void leer()
{
    string nombre_archivo = "peliculas.txt", duracion, ISBM, nombre, director;
    ifstream archivo(nombre_archivo.c_str());
    string linea;
    cout << endl
         << "Lista de peliculas:" << endl;
    int contador = 1;
    while (getline(archivo, linea))
    {
        switch (contador)
        {
        case 1:
            cout << "ISBM: " << linea << " , ";
            contador++;
            break;
        case 2:
            cout << "Nombre: " << linea << " , ";
            contador++;
            break;
        case 3:
            cout << "Director: " << linea << " , ";
            contador++;
            break;
        case 4:
            cout << "Duracion: " << linea << endl;
            contador = 1;
            break;
        }
    }
}
void agregar()
{
    pelicula nueva_pelicula;
    ofstream archivo;
    string nombre_archivo = "peliculas.txt";
    cout << "Ingresa el codigo ISBM:" << endl;
    cin >> nueva_pelicula.ISBM;
    cout << "Ingresa el nombre:" << endl;
    cin >> nueva_pelicula.nombre;
    cout << "Ingresa el nombre del director:" << endl;
    cin >> nueva_pelicula.director;
    cout << "Ingresa el duracion:" << endl;
    cin >> nueva_pelicula.duracion;
    // sobreescribe el txt que tenemos
    // archivo.open(nombre_archivo.c_str(), fstream::out);
    // agrega contenido al txt sin sobreescribir
    archivo.open(nombre_archivo.c_str(), fstream::app);
    // guardamos ISBM,Nombre,director,duracion separados por coma para identificarlos al leerlos.
    archivo << nueva_pelicula.ISBM << endl;
    archivo << nueva_pelicula.nombre << endl;
    archivo << nueva_pelicula.director << endl;
    archivo << nueva_pelicula.duracion << endl;
}
