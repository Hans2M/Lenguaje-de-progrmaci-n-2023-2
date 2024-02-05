#include <iostream>
#include <vector>
#include <string>
using namespace std;
string especiex;
float alturax;
int edadx;
struct Arbol {
    string especie;
    float altura;
    int edad;
};
string Mad_finasx;
string arabex;
int empleadox;
struct EmpresaMaderera {
    string Maderas_finas;
    string Arabe;
    int empleados;
};
string nombrex;
string descrix;
struct ZonaAfectada {
    string nombre;
    string descripcion;
};

void mostrarDatosBosque(const vector<Arbol> &bosque) {
    for (const auto &arbol : bosque) {
        cout << "Especie: " << arbol.especie << ", Altura: " << arbol.altura << "m, Edad: " << arbol.edad << " temporada" << endl;
    }
}
vector<Arbol> bosque;
int agrdts_bosque;
float agregardatos_bosque(){//primero
    cout<<"cuantos datos va agregar: ";
    cin>>agrdts_bosque;
    //vector<Arbol> bosque;
    for (int i = 0; i < agrdts_bosque; i++)
    {
        cout<<"\ningrese nombre: ";
        cin>>especiex;
        cout<<"\ningrese altura: ";
        cin>>alturax;
        cout<<"\ningrese edad: ";
        cin>>edadx;
        bosque.push_back({especiex,alturax,edadx});
    }
    cout<<"\nDATOS ACTUALIZADOS!\n";
    mostrarDatosBosque(bosque);
}

void mostrarEmpresasMadereras(const vector<EmpresaMaderera> &empresas) {
    for (const auto &empresa : empresas) {
        cout << "Nombre: " << empresa.Maderas_finas << ", Ubicacion: " << empresa.Arabe << ", Empleados: " << empresa.empleados << endl;
    }
}
int agrdts_madera;
vector<EmpresaMaderera> empresas;
float agregardatos_madera(){//segundo
    cout<<"cuantos datos va agregar: ";
    cin>>agrdts_madera;
    //vector<EmpresaMaderera> empresas;
    for (int i = 0; i < agrdts_madera; i++)
    {
        cout<<"\ningrese nombre (agregar '_' remplazando los espacios): ";
        cin>>Mad_finasx;
        cout<<"\ningrese ubicacion (agregar '_' remplazando los espacios): ";
        cin>>arabex;
        cout<<"\ningrese empleados: ";
        cin>>empleadox;
        empresas.push_back({Mad_finasx, arabex, empleadox});
    }
    cout<<"\nDATOS ACTUALIZADOS!\n";
    mostrarEmpresasMadereras(empresas);
}


void mostrarZonasAfectadas(const vector<ZonaAfectada> &zonas) {
    for (const auto &zona : zonas) {
        cout << "Nombre: " << zona.nombre << ", Descripcion: " << zona.descripcion << endl;
    }
}
int agrdts_afectadas;
vector<ZonaAfectada> zonas;
float agregardatos_afectadas(){//tercero
    cout<<"cuantos datos va agregar: ";
    cin>>agrdts_afectadas;
    //vector<ZonaAfectada> zonas;
    for (int i = 0; i < agrdts_afectadas; i++)
    {
        cout<<"\ningrese nombre (agregar '_' remplazando los espacios): ";
        cin>>nombrex;
        cout<<"\ningrese descripcion (agregar '_' remplazando los espacios): ";
        cin>>descrix;
        zonas.push_back({nombrex, descrix});
    }
    cout<<"\nDATOS ACTUALIZADOS!\n";
    mostrarZonasAfectadas(zonas);
}
//agregar unos pequeños detalles sobre los arboles o la deforestacion
//ser bien breve y preciso al dar informacion
//como puede ayudar este proyecto a la poblacion tingalesa 
//enfocarte en los arboles 

int main() {
    //vector<Arbol> bosque;
    bosque.push_back({"Pino", 10.5, 15});
    bosque.push_back({"Roble", 12.3, 20});
    bosque.push_back({"Arce", 8.7, 10});
    bosque.push_back({"pinochuncho", 8.7, 10});
    bosque.push_back({"tornillo", 8.7, 10});
    bosque.push_back({"palmeras", 8.7, 10});
    bosque.push_back({"caoba", 8.7, 10});
    bosque.push_back({"bolaina", 8.7, 10});
    bosque.push_back({"capirona", 8.7, 10});
    bosque.push_back({"pumarrosa", 8.7, 10});
    //MostrarDatBosq();

    //vector<EmpresaMaderera> empresas;
    empresas.push_back({"Maderas_duraderas", "Arabe", 50});
    empresas.push_back({"Maderas_fertil", "Tingo_Maria", 30});
    empresas.push_back({"Maderas_aceros", "pacae", 30});
    empresas.push_back({"Maderas_confiables", "Anda", 30});
    empresas.push_back({"Maderas_por_simpre", "Pampa_Hermosa", 30});
    empresas.push_back({"Maderas_modernas", "Alto_pacae", 30});
    empresas.push_back({"Maderas_resistentes", "Villa_rica", 30});
    empresas.push_back({"Maderas_finas", "Montero", 30});
    empresas.push_back({"Maderas_de_calidad", "Santa_Marta", 30});
    //MostrarDatMad();

    //vector<ZonaAfectada> zonas;
    zonas.push_back({"caserio_la_ezperanza", "zona_cocalera"});
    zonas.push_back({"Distrito_Santo_Domingo_de_anda", "zona_de_arroz"});
    zonas.push_back({"Distrito_pueblo_Nuevo", "zona_platanera"});
    zonas.push_back({"caserio_jose__carlos_Mareategui", "zona_platanera"});
    zonas.push_back({"caserio_pacae", "zona_de_arroz"});
    zonas.push_back({"caserio_pampa_Hermosa", "zona_platanera"});
    zonas.push_back({"Distrito_la_Morada", "zona_cocalera"});
    zonas.push_back({"centro_poblado_venenillo", "zona_platanera"});
    //MostrarDatafec();

    int opcion;
    do {
        cout << "-------------------------------------------------------------------------------------------------"<<endl;
        cout << "-----------------------------------ELIJA UNA OPCION----------------------------------------------"<<endl;
        cout << "|               1)Tipos de Arboles | 2)Empresas Madereras | 3)Zonas Afectadas | 0)Salir "                   <<endl;
        cout << "--------------------------------------------------------------------------------------------------"<<endl;
        cout << "-----------------------------------(TINGO MARIA)--------------------------------------------------"<<endl;
        cout<<"Ingrese opcion: ";
        cin >> opcion;
        //vector<Arbol> bosque;
        //vector<EmpresaMaderera> empresas;
        //vector<ZonaAfectada> zonas;
        if (opcion == 1) {
            mostrarDatosBosque(bosque);
            int sino;
            cout<<"\nDesea agregar datos(si=1/no=2): ";
            cin>>sino;
            switch (sino)
            {
            case 1:
                agregardatos_bosque();
                mostrarDatosBosque(bosque);
                break;
            case 2:
                break;
            default:
                break;
            }
        
        } else if (opcion == 2) {
            mostrarEmpresasMadereras(empresas);
            int sino;
            cout<<"\nDesea agregar datos(si=1/no=2): ";
            cin>>sino;
            switch (sino)
            {
            case 1:
                agregardatos_madera();
                mostrarEmpresasMadereras(empresas);
                break;
            case 2:
                break;
            default:
                break;
            }
        } else if (opcion == 3) {
            mostrarZonasAfectadas(zonas);
            int sino;
            cout<<"\nDesea agregar datos(si=1/no=2): ";
            cin>>sino;
            switch (sino)
            {
            case 1:
                agregardatos_afectadas();
                mostrarZonasAfectadas(zonas);
                break;
            case 2:
                break;
            default:
                break;
            }
        }
    } while (opcion != 0);

    return 0;
}

