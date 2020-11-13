/*
ITESM Querétaro
Programación Orientada a Objetos
Avance de Proyecto
Cristian Leilael Rico Espinosa A01707023
12/11/2020
*/
#include<iostream>
using namespace std;

class Proveedor{

private:

    string compania;
    string costo;
    string duracion;
    string megas;

public:

    //Constructor
    Proveedor(): compania(""), costo(""), duracion(""), megas(""){}; // Por Default
    Proveedor(string com, string cos, string dur, string meg): compania(com), costo(cos), duracion(dur), megas(meg){};


    string get_compania();
    string get_costo();
    string get_duracion();
    string get_megas();

    void set_compania(string);
    void set_costo(string);
    void set_duracion(string);
    void set_megas(string);

};

// Getters

string Proveedor::get_compania(){
return compania;
}

string Proveedor::get_costo(){
return costo;
}

string Proveedor::get_duracion(){
return duracion;
}

string Proveedor::get_megas(){
return megas;
}

// Setters

void Proveedor::set_compania(string com){
compania = com;
}

void Proveedor::set_costo(string cos){
costo = cos;
}

void Proveedor::set_duracion(string dur){
duracion = dur;
}

void Proveedor::set_megas(string meg){
megas = meg;
}
