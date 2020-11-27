/*
ITESM Querétaro
Programación Orientada a Objetos
Avance de Proyecto
Cristian Leilael Rico Espinosa A01707023
26/11/2020
*/

#include "creProveedor.h"

class Telcel:public Proveedor{

public:
    Telcel(string com, string cos, string dur, string meg):Proveedor(com, cos, dur, meg){
    }

};
