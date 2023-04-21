#include "cvuelo.h"

CVuelo::CVuelo(string origen,string destino,string nPiloto, string nCopiloto, string aerolinea, string tipoCombustible, string *itinerario, int velocidadP, int cantidadPersonas, int cantidadCombustible,bool realizado) {
    this->realizado=realizado;
    this->origen=origen;
        this->destino=destino;
        this->NPiloto = nPiloto;
       this->NCopiloto = nCopiloto;
       this->Aerolinea = aerolinea;
       this->tipoCombustible = tipoCombustible;
       this->itinerario = itinerario;
       this->velocidadP = velocidadP;
       this->cantidadPersonas = cantidadPersonas;
       this->cantidadCombustible = cantidadCombustible;
   }

string CVuelo::getOrigen(){
    return origen;
}

void CVuelo::setOrigen(string origen){
    this->origen=origen;
}

string CVuelo::getDestino(){
    return destino;
}

void CVuelo::setDestino(string destino){
    this->destino=destino;
}


int CVuelo::getVelocidadP() {
       return velocidadP;
   }

void CVuelo::setVelocidadP(int velocidadP) {
       this->velocidadP = velocidadP;
   }

int CVuelo::getCantidadCombustible() {
       return cantidadCombustible;
   }

 void CVuelo::setCantidadCombustible(int cantidadCombustible) {
       this->cantidadCombustible = cantidadCombustible;
   }

 string *CVuelo::getItinerario() {
     return itinerario;
 }

 void CVuelo::setItinerario(string *itinerario)
 {
   this->itinerario=itinerario;
 }

 int CVuelo::getCantidadPersonas() {
       return cantidadPersonas;
   }

 void CVuelo::setCantidadPersonas(int cantidadPersonas) {
       this->cantidadPersonas = cantidadPersonas;
   }

 string CVuelo::getAerolinea() {
       return Aerolinea;
   }

 void CVuelo::setAerolinea(string aerolinea) {
       Aerolinea = aerolinea;
   }

 string CVuelo::getTipoCombustible() {
       return tipoCombustible;
   }

 void CVuelo::setTipoCombustible(string tipoCombustible) {
       this->tipoCombustible = tipoCombustible;
   }

string CVuelo::getNCopiloto() {
       return NCopiloto;
   }

  void CVuelo::setNCopiloto(string NCopiloto) {
       this->NCopiloto = NCopiloto;
   }

string CVuelo::getNPiloto() {
       return NPiloto;
   }

void CVuelo::setNPiloto(string NPiloto) {
       this->NPiloto = NPiloto;
   }
