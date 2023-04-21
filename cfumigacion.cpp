#include "cfumigacion.h"


    CFumigacion::CFumigacion(string origen,string destino ,
                             string nPiloto, string nCopiloto,
                             string aerolinea, string tipoCombustible,
                             string *itinerario, int velocidadP, int cantidadPersonas,
                             int cantidadCombustible,int tiempo, string productos,bool realizado
                             ):CVuelo(origen,destino,nPiloto,nCopiloto,aerolinea,tipoCombustible,
                                      itinerario,velocidadP,cantidadPersonas,cantidadCombustible,realizado){
        this->tiempo = tiempo;
        this->productos = productos;
    }

    string CFumigacion::getProductos() {
        return productos;
    }

    void CFumigacion::setProductos(string productos) {
        this->productos = productos;
    }

    int CFumigacion::getTiempo() {
        return tiempo;
    }

    void CFumigacion::setTiempo(int tiempo) {
        this->tiempo = tiempo;
    }


