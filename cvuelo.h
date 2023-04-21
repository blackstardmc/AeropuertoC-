#ifndef CVUELO_H
#define CVUELO_H
using namespace std;
#include <iostream>
#include <qstring.h>


class CVuelo
{
private:
    string NPiloto,NCopiloto,Aerolinea,tipoCombustible,origen,destino;
    string *itinerario;
    bool realizado;
    int velocidadP,cantidadPersonas,cantidadCombustible;

public:
    CVuelo(string origen,string destino,string nPiloto, string nCopiloto, string aerolinea, string tipoCombustible, string *itinerario, int velocidadP, int cantidadPersonas, int cantidadCombustible,bool realizado);
    int getVelocidadP();
    string getOrigen();
    void setOrigen(string);
    string getDestino();
    void setDestino(string);
    void setVelocidadP(int velocidadP);
    int getCantidadCombustible();
    void setCantidadCombustible(int cantidadCombustible);
    string* getItinerario();
    void setItinerario(string *itinerario);
    int getCantidadPersonas();
    void setCantidadPersonas(int cantidadPersonas);
    string getAerolinea();
    void setAerolinea(string aerolinea);
    string getTipoCombustible();
    void setTipoCombustible(string tipoCombustible);
    string getNCopiloto();
    void setNCopiloto(string NCopiloto);
    string getNPiloto();
    void setNPiloto(string NPiloto);
};

#endif // CVUELO_H
