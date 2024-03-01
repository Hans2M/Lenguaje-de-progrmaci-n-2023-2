#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
// #include <stdlib.h>
using namespace std;

int opcion;
int adex;
int conti;
int idBuscado;
void salir()
{
    exit(0);
}
int menu()
{
    cout << "|--------------MENU--------------|\n|1-Registrar Nacimiento          |\n|2-Registrar Muerte              |\n|3-Mostrar Registro de Fallecidos|\n|4-Mostrar Registro de Nacimiento|\n|5-Buscar por ID                 |\n|6-Salir                         |\n|--------------------------------|";
    cout << "\nIngrese una opcion>> ";
    cin >> opcion;
    return opcion;
}

int num_naci;
int id_ani;
string raza;
string sexo;
string fechaNacimiento;
double peso;
string nombrePadre;
string nombreMadre;

int solicitarID()
{
    cout << "Por favor, introduce el ID del animal que deseas buscar: ";
    cin >> idBuscado;
    return idBuscado;
}
int registrarNacimiento()
{
    ofstream archivo("datos_nacimiento.txt", ios::app);
    if (archivo.is_open())
    {
        archivo << "ID"
                << "\t"
                << "Raza"
                << "\t"
                << "Sexo"
                << "\t"
                << "F_Nacimiento"
                << "\t"
                << "Peso"
                << "\t"
                << "Padre"
                << "\t"
                << "Madre" << endl;
        cout << "\nCuantos Vacunos desea agregar: ";
        cin >> num_naci;
        for (int i = 0; i < num_naci; i++)
        {
            cout << "\nIngrese id del animal: ";
            cin >> id_ani;
            cout << "\nIngrese la raza: ";
            cin >> raza;
            cout << "\nIngrese el sexo: ";
            cin >> sexo;
            cout << "\nIngrese fecha de nacimiento: ";
            cin >> fechaNacimiento;
            cout << "\nIngrese el peso: ";
            cin >> peso;
            cout << "\nIngrese nombre del padre: ";
            cin >> nombrePadre;
            cout << "\nIngrese nombre de la madre: ";
            cin >> nombreMadre;
            archivo << id_ani << "\t" << raza << "\t" << sexo << "\t" << fechaNacimiento << "\t" << peso << "\t" << nombrePadre << "\t" << nombreMadre << endl; // Escribir los datos en el archivo separados por comas
            cout << "Nacimiento del animal registrado correctamente" << endl;
        }
        archivo.close(); // Cerrar el archivo
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    switch (conti)
    {
    case 0:
        cout << "Hasta Luego...";
        salir();
        break;
    case 1:
        menu();
    default:
        break;
    }
    return 0;
}

int idAnimal;
string fechaMuerte;
string causaMuerte;

int registrarMuerte()
{
    // Crear un nuevo registro con los datos de la muerte del animal
    // string registro = to_string(idAnimal) + "," + fechaMuerte + "," + causaMuerte;

    // Abrir el archivo en modo de escritura al final del archivo
    ofstream archivo("muertes_animales.txt", ios::app);
    if (archivo.is_open())
    {
        archivo << "ID"
                << "\t"
                << "Fecha_Muerte"
                << "\t"
                << "Causa_Muerte" << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << "\nIngrese id: ";
            cin >> idAnimal;
            cout << "\nIngrese fecha de muerte: ";
            cin >> fechaMuerte;
            cout << "\nIngrese causa de la muerte: ";
            cin >> causaMuerte;
            archivo << idAnimal << "\t" << fechaMuerte << "\t" << causaMuerte << endl; // Escribir los datos en el archivo separados por comas
            // archivo << registro << endl; // Escribir el registro en el archivo
            cout << "\nMuerte del animal registrada correctamente" << endl;
        }
        archivo.close(); // Cerrar el archivo
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti == 1)
    {
        menu();
    }
    else
    {
        salir();
    }
    return 0;
}
int mostrarFallecidos()
{
    ifstream archivo("muertes_animales.txt");
    string linea;
    if (archivo.is_open())
    {
        while (getline(archivo, linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti == 1)
    {
        menu();
    }
    else
    {
        salir();
    }
    return 0;
}
int mostrarNacimiento()
{
    ifstream archivo("datos_nacimiento.txt");
    string lineax;
    if (archivo.is_open())
    {
        while (getline(archivo, lineax))
        {
            cout << lineax << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
    cout << "\nVa a reaizar otra consulta (si:1 | no:0): ";
    cin >> conti;
    cout << "\n";
    if (conti == 1)
    {
        menu();
    }
    else
    {
        system("exit");
    }
    return 0;
}
void buscarAnimal(int idBuscado)
{
    string linea;
    bool encontradoNacimiento = false;
    bool encontradoMuerte = false;

    ifstream archivoNacimiento("datos_nacimiento.txt");
    if (archivoNacimiento.is_open())
    {
        while (getline(archivoNacimiento, linea))
        {
            stringstream ss(linea);
            string item;
            getline(ss, item, '\t'); // Cambiamos ',' por '\t'
            if (!item.empty() && item.find_first_not_of("0123456789") == string::npos && stoi(item) == idBuscado)
            {
                cout << "Datos de Nacimiento del Animal con ID " << idBuscado << ": " << linea << endl;
                encontradoNacimiento = true;
                // break;
            }
        }
        archivoNacimiento.close();
    }
    else
    {
        cout << "Error al abrir el archivo de nacimiento." << endl;
    }

    ifstream archivoMuerte("muertes_animales.txt");
    if (archivoMuerte.is_open())
    {
        while (getline(archivoMuerte, linea))
        {
            stringstream ss(linea);
            string item;
            getline(ss, item, '\t'); // Cambiamos ',' por '\t'
            if (!item.empty() && item.find_first_not_of("0123456789") == string::npos && stoi(item) == idBuscado)
            {
                cout << "Datos de Muerte del Animal con ID " << idBuscado << ": " << linea << endl;
                encontradoMuerte = true;
                break;
            }
        }
        archivoMuerte.close();
    }
    else
    {
        cout << "Error al abrir el archivo de muertes." << endl;
    }

    if (encontradoNacimiento && !encontradoMuerte)
    {
        cout << "El animal con ID " << idBuscado << " está vivo." << endl;
    }
    else if (encontradoNacimiento && encontradoMuerte)
    {
        cout << "El animal con ID " << idBuscado << " está muerto." << endl;
    }
    else
    {
        cout << "No se encontró el animal con ID " << idBuscado << "." << endl;
    }
    system("pause");
}

int main()
{
    menu();
    while (1 <= opcion <= 6)
    {
        switch (opcion)
        {
        case 1:
            system("cls");
            registrarNacimiento();
            menu();
            break;
        case 2:
            system("cls");
            registrarMuerte();
            menu();
            break;
        case 3:
            system("cls");
            mostrarFallecidos();
            menu();
            break;
        case 4:
            system("cls");
            mostrarNacimiento();
            menu();
            break;
        case 5:
            system("cls");
            int bus_por_id;
            idBuscado = solicitarID();
            buscarAnimal(idBuscado);
            menu();
            break;
        case 6:
            system("cls");
            salir();
        default:
            break;
        }
    }
    return 0;
}