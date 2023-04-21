#include "cpresidenciales.h"

    CPresidenciales::CPresidenciales(string origen,string destino ,string nPiloto, string nCopiloto,
                                     string aerolinea, string tipoCombustible, string *itinerario, int velocidadP,
                                     int cantidadPersonas, int cantidadCombustible,string idiomaNativo, string paisProcendecia,
                                     int cantidadDelegacion,bool realizado):CVuelo(origen,destino,nPiloto,nCopiloto,
                                                                    aerolinea,tipoCombustible,itinerario,
                                                                                   velocidadP,cantidadPersonas,
                                                                                   cantidadCombustible,realizado){
        this->idiomaNativo = idiomaNativo;
        this->paisProcendecia = paisProcendecia;
        this->cantidadDelegacion = cantidadDelegacion;
    }

    int CPresidenciales::getCantidadDelegacion() {
        return cantidadDelegacion;
    }

    void CPresidenciales::setCantidadDelegacion(int cantidadDelegacion) {
        this->cantidadDelegacion = cantidadDelegacion;
    }

    string CPresidenciales::getPaisProcendecia() {
        return paisProcendecia;
    }

    void CPresidenciales::setPaisProcendecia(string paisProcendecia) {
        this->paisProcendecia = paisProcendecia;
    }

    string CPresidenciales::getIdiomaNativo() {
        return idiomaNativo;
    }

    void CPresidenciales::setIdiomaNativo(string idiomaNativo) {
        this->idiomaNativo = idiomaNativo;
    }
