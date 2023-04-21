#ifndef CAEROPUERTO_H
#define CAEROPUERTO_H
#include "cvuelo.h"
#include "cpresidenciales.h"
#include "cpoblacion.h"
#include "cfumigacion.h"
#include <iostream>
using namespace std;

class CAeropuerto
{
private:
    CVuelo **aeropueroto;
    int cantidad=0;


public:
    int getCantidad();
    CAeropuerto(int);
    int cantTipo(int);
    string mayorDestino();
    void insertar(CVuelo *vuelo);
    CVuelo getVuelo(int);
    string pilotoMayor();
    string productoMayor();
    string paisMayorDelegacion();


    /*
     * Los metodos no creados se resuelven facilmente en el main de la app,pero como se realiazara una app visual describire
     * como deben estar creados los metodos restantes
     * 1-De que origenes no salieron vuelos
     * Respuesta : Imprimimos usando el metodo getVuelo() todos los vuelos q no se hallan realizado encerrado en un if el atributo
     * getRealizado()
     * Algo asi
     * for(int i=0;i<a.getCantidad();i++){
     *  if(!a.getVuelo().getRealizado()){
     *      a.getVuelo().getOrigen();}}
     *
     * 2-Los que se realizaron completos
     * Respuesta : Lo mismo que el anterior pero sin el signo de negacion (!) en el if
     *
     *
     * Hubo un problema y es que por las desventajas de c++ no se puede obtener el tamano de un arreglo y asi saber
     * cual es el de mayor itinerario,para resolver esto entonces al crear la clase vuelo debimos implementar aparte del atributo itinerario
     * tambien otro atributo que almacene su tamano para iterar con este arreglo y emplearlo en los dos ultimos metodos, el de busqueda usando
     * un for anidado y usando la posicion -1 para manejarlo en caso de que no se encuentra. Y el otro metodo que se resolveria seria el
     * encontrar el de mayor itinerario que es solo ir comparando con un for y coger la posicion del mayor e imprimir los datos de este vuelo
     *
     */
    CAeropuerto();
};

#endif // CAEROPUERTO_H
