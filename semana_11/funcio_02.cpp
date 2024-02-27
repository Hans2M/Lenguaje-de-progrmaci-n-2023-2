/*elaborar un programa que solicite un arreglo de 10 estudiantes
y que cada estudiante cuente con 3 notas, se solicita calcular el promedio de 
las notas del estudiante*/
#include <iostream>
#include <string>

struct Estudiante
{
    string nombre;
    string apellido;
    int edad;
    float nota[3];
    float promedio;
    /*data*/
};
void promedio(Estudiante estudiante);
void ingresar_estudiantes(){
    cout<<"Ingrese los estudiantes a registrar"<<endl;
    Estudiante estud[3];
    for (int i=0; i<3; i++){
        cout<<"Ingrese el nombre del estudiante"<<endl;
        cin>>estud[i].nombre;
        cout<<"Ingrese el apellido del estudiante"<<endl;
        cin>>estud[i].apellido;
        cout<<"Ingrese la edad del estudiante"<<endl;
        cin>>estud[i].edad;
        cout<<"Ingrese las notas del estudiante"<<endl;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Ingrese la nota"<<j
        }
        

    }
}

int main()
{
    return 0;
}


void promedio(Estudiante estudiante){
    float suma=0;
    for (int i=0; i<3; i++){
        suma= suma + estudiante.nota[i];
    }
}


using namespace std;
int main()
{

    return 0;
}