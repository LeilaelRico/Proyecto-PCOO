/*
ITESM Querétaro
Programación Orientada a Objetos
Avance de Proyecto
Cristian Leilael Rico Espinosa A01707023
12/11/2020
*/

#include<iostream>
#include<cstdlib>
#include "creUsuario.h"
#include "creProveedor.h" // Incluyo las clases que hice y guardé como encabezados.
#include "creCosto.h"


using namespace std;

void menu(){

    // Muestra las opciones del sistema
    cout<< "\n*******************************************************";
    cout<< "\nSeleccione las opciones por el orden dado.\n";
    cout<< "1. Ingresar su nombre.\n";
    cout<< "2. Ingresar su apellido.\n";
    cout<< "3. Mostrar informaci\242n del proveedor\n";
    cout<< "4. Seleccione su forma de pago.\n";
    cout<< "5. Obtenga su numero.\n";
    cout<< "6. Mostrar sus datos.\n";
    cout<< "7. Salir.\n";
    cout<< "*******************************************************";
}

void fmpg (){
    cout<< "1. Debito.\n";
    cout<< "2. Tarjeta de credito.\n";
}

int main (){

    Usuario user;

    Proveedor prov1("Telcel"," $20"," 1 dia"," 200 Mb");
    Proveedor prov2("Telcel"," $80"," 13 dias"," 1 Gb");
    Proveedor prov3("Telcel"," $100"," 15 dias"," Ilimitado");
    Proveedor prov4("Movistar"," $30"," 3 dias"," 300 Mb");
    Proveedor prov5("Movistar"," $50"," 7 dias"," 600 Mb");
    Proveedor prov6("Movistar"," $100"," 15 dias"," 1.5 Gb");
    string usernom, userap;
    int userpro, userpaq, userpag, usernum;


    int opcion=0;

    while(opcion < 7 && opcion > -1){

        menu();

          cout<< "\nPorfavor, ingrese una opci\242n: ";
          cin>>opcion;

          switch(opcion){

          case 1:

            cout<<"Ingrese su nombre: ";
            cin>>usernom;
            user.set_nombre(usernom);
            cout<<"Nombre: "<<user.get_nombre()<<endl;
            break;

          case 2:

            cout<<"Ingrese su apellido: ";
            cin>>userap;
            user.set_apellido(userap);
            cout<<"Apellido: "<<user.get_apellido()<<endl;
            break;

          case 3:
            cout<<"1. "<<prov1.get_compania()<<prov1.get_costo()<<prov1.get_duracion()<<prov1.get_megas()<<endl;
            cout<<"2. "<<prov2.get_compania()<<prov2.get_costo()<<prov2.get_duracion()<<prov2.get_megas()<<endl;
            cout<<"3. "<<prov3.get_compania()<<prov3.get_costo()<<prov3.get_duracion()<<prov3.get_megas()<<endl;
            cout<<"4. "<<prov4.get_compania()<<prov4.get_costo()<<prov4.get_duracion()<<prov4.get_megas()<<endl;
            cout<<"5. "<<prov5.get_compania()<<prov5.get_costo()<<prov5.get_duracion()<<prov5.get_megas()<<endl;
            cout<<"6. "<<prov6.get_compania()<<prov6.get_costo()<<prov6.get_duracion()<<prov6.get_megas()<<endl;

            cout<<"\nElija uno de los paquetes antes mostrados: ";
            cin>>userpaq;
            //user.set_paquete(userpaq);
            break;

          case 4:
            fmpg();
            cout<<"Elija una de las opciones: ";
            cin>>userpag;
            //user.get_pago(userpag);
            break;

          case 5:
            usernum=rand()% 900+11111111;
            cout<<"Este es su numero:\n"<<usernum;
            break;

          case 6:
            cout<<"Nombre: "<<user.get_nombre()<<"\nApellido: "<<user.get_apellido()<<"\nPaquete: "<<userpaq<<"\nTipo de Pago: "<<userpag<<"\nSu numero: "<<usernum<<endl;
            break;

          }
          }

}
