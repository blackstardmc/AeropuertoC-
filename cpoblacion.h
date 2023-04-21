#ifndef CPOBLACION_H
#define CPOBLACION_H
#include <iostream>
using namespace std;
#include "cvuelo.h"

class CPoblacion:public CVuelo
{
private:
    string modelo;
public:
    CPoblacion(string origen,string destino ,string nPiloto, string nCopiloto, string aerolinea, string tipoCombustible, string *itinerario, int velocidadP, int cantidadPersonas, int cantidadCombustible,string modelo,bool realizado);
    string getModelo();
    void setModelo(string);
}

#endif // CPOBLACION_H
