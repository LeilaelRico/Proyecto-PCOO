/*
ITESM Querétaro
Programación Orientada a Objetos
Avance de Proyecto
Cristian Leilael Rico Espinosa A01707023
26/11/2020
*/

#ifndef PROVEEDOR_H
#define PROVEEDOR_H

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
    Proveedor(string com, string cos, string dur, string meg){
        compania = com;
        costo = cos;
        duracion = dur;
        megas = meg;

    }


    /*string get_compania();
    string get_costo();
    string get_duracion();
    string get_megas();

    void set_compania(string);
    void set_costo(string);
    void set_duracion(string);
    void set_megas(string);*/

//};
// Getters

string get_compania(){
return compania;
}

string get_costo(){
return costo;
}

string get_duracion(){
return duracion;
}

string get_megas(){
return megas;
}

// Setters

void set_compania(string com){
compania = com;
}

void set_costo(string cos){
costo = cos;
}

void set_duracion(string dur){
duracion = dur;
}

void set_megas(string meg){
megas = meg;
}

};

#endif
