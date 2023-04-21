#ifndef CFUMIGACION_H
#define CFUMIGACION_H
#include "cvuelo.h"
#include <iostream>
using namespace std;

class CFumigacion:public CVuelo{

private :

        int tiempo;
        string productos;

public :
      CFumigacion();
      CFumigacion(string origen,string destino ,string nPiloto, string nCopiloto, string aerolinea, string tipoCombustible, string *itinerario
                  , int velocidadP, int cantidadPersonas, int cantidadCombustible,int tiempo, string productos,bool realizado);
      string getProductos();
      void setProductos(string productos);
      int getTiempo();
      void setTiempo(int tiempo);
}

#endif // CFUMIGACION_H
