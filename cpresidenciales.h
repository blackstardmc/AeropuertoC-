#ifndef CPRESIDENCIALES_H
#define CPRESIDENCIALES_H
#include "cvuelo.h"

class CPresidenciales:public CVuelo
{
private:
    string idiomaNativo,paisProcendecia;
    int cantidadDelegacion;

public:
    CPresidenciales();
    CPresidenciales(string orige,string destino ,string nPiloto, string nCopiloto, string aerolinea, string tipoCombustible, string *itinerario, int velocidadP, int cantidadPersonas, int cantidadCombustible,string idiomaNativo, string paisProcendecia, int cantidadDelegacion,bool realizado);
    int getCantidadDelegacion();
    void setCantidadDelegacion(int cantidadDelegacion);
    string getPaisProcendecia();
    void setPaisProcendecia(string paisProcendecia);
    string getIdiomaNativo();
    void setIdiomaNativo(string idiomaNativo);
};

#endif // CPRESIDENCIALES_H
