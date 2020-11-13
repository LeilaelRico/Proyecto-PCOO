/*
ITESM Querétaro
Programación Orientada a Objetos
Avance de Proyecto
Cristian Leilael Rico Espinosa A01707023
12/11/2020
*/
#include<iostream>
using namespace std;

class Costo{

private:

    int pago;
    int numero;

public:

    //Constructor
    Costo(): pago(0), numero(0){}; // Por Default

    int get_pago();
    int get_numero();

};

int Costo::get_pago(){
return pago;
}

int Costo::get_numero(){
return numero;
}
