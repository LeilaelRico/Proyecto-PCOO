/*
ITESM Querétaro
Programación Orientada a Objetos
Avance de Proyecto
Cristian Leilael Rico Espinosa A01707023
12/11/2020
*/
#include<iostream>
using namespace std;

class Usuario{

private:

    string nombre;
    string apellido;
    int proveedor;
    int paquete;
    int pago;
    int numero;

public:

    //Constructor
    Usuario(): nombre(""), apellido(""), proveedor(0), paquete(0), pago(0), numero(0){}; // Por Default
    Usuario(string nom, string ap, int pro, int paq, int pag, int num): nombre(nom), apellido(ap), proveedor(pro), paquete(paq), pago(pag), numero(num){};

    string get_nombre();
    string get_apellido();
    void set_nombre(string);
    void set_apellido(string);

    int get_proveedor();
    int get_paquete();
    int get_pago();
    int get_numero();

   /* void set_pago(int);
    void set_paquete(int);*/
};

// Getters

string Usuario::get_nombre(){
return nombre;
}

string Usuario::get_apellido(){
return nombre;
}

int Usuario::get_proveedor(){
return proveedor;
}

int Usuario::get_paquete(){
return paquete;
}

int Usuario::get_pago(){
return pago;
}

int Usuario::get_numero(){
return numero;
}

// Setters

void Usuario::set_nombre(string n){
nombre = n;
}

void Usuario::set_apellido(string ape){
apellido = ape;
}

/*void Usuario::set_pago(int p){
pago = p;
}

void Usuario::set_paquete(int pq){
paquete = pq;*/

