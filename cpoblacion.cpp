#include "cpoblacion.h"

CPoblacion::CPoblacion(string origen,string destino ,string nPiloto,
                       string nCopiloto, string aerolinea, string tipoCombustible,
                       string *itinerario, int velocidadP, int cantidadPersonas,
                       int cantidadCombustible,string modelo,
                       bool realizado):CVuelo(origen,destino,nPiloto,nCopiloto,aerolinea,
                                              tipoCombustible,itinerario,velocidadP,cantidadPersonas,cantidadCombustible,realizado){
    this->modelo=modelo;
}

string CPoblacion::getModelo(){
    return modelo;
}

void CPoblacion::setModelo(string modelo){
    this->modelo=modelo;
}
