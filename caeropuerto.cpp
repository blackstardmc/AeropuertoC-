#include "caeropuerto.h"

int CAeropuerto::cantTipo(int tipo)
{
    int contador=0;
    switch (tipo) {
    case 0:
        for(int i=0;i<cantidad;i++){
            if(this->aeropueroto[i]->getClass()== CPresidenciales.getClass()){
                contador++;
            }
        }
        break;
    case 1:
        for(int i=0;i<cantidad;i++){
            if(this->aeropueroto[i]->getClass()== CPoblacion.getClass()){
                contador++;
            }
        }
        break;

    case 2:
        for(int i=0;i<cantidad;i++){
            if(this->aeropueroto[i]->getClass()== CFumigacion.getClass()){
                contador++;
            }
        }
        break;

    }
    return contador;

}


string CAeropuerto::mayorDestino()
{
    string destinoM="";
    int contador=0;
    int contM=0;
        for(int i=0;i<cantidad;i++){

            for(int j=0;j<cantidad;j++){
                if(aeropueroto[i]->getDestino()==aeropueroto[j]->getDestino()){
                    contador++;
                }
                if(contador>contM){
                    contM=contador;
                    destinoM=aeropueroto[i]->getDestino();
                }
                contador=0;
            }
        }
    return destinoM;

}

void CAeropuerto::insertar(CVuelo *vuelo)
{aeropueroto[cantidad]=vuelo;
    cantidad++;

}


CVuelo CAeropuerto::getVuelo(int position)
{
    return aeropueroto[position];
}

string CAeropuerto::pilotoMayor()
{
    string pilotoM="";
    int contador=0;
    int contM=0;
        for(int i=0;i<cantidad;i++){

            for(int j=0;j<cantidad;j++){
                if(aeropueroto[i]->getNPiloto()==aeropueroto[j]->getNPiloto()){
                    contador++;
                }
                if(contador>contM){
                    contM=contador;
                    pilotoM=aeropueroto[i]->getNPiloto();
                }
                contador=0;
            }
        }
    return pilotoM;

}

string CAeropuerto::productoMayor()
{
    string productoM="";
    int contador=0;
    int contM=0;
        for(int i=0;i<cantidad;i++){

            if(this->aeropueroto[i]->getClass()== CFumigacion.getClass()){

                for(int j=0;j<cantidad;j++){
                    if(aeropueroto[i]->getNPiloto()==CFumigacion(aeropueroto[j]).getProductos()){
                    contador++;
                }
                if(contador>contM){
                    contM=contador;
                    productoM=CFumigacion(aeropueroto[i]).getProductos();
                }
                contador=0;
            }
        }}
    return productoM;

}

string CAeropuerto::paisMayorDelegacion()
{
    int posMayor=0;
    int mayorN=0;
    for(int i=0;i<cantidad;i++){
        if(this->aeropueroto[i]->getClass()== CPresidenciales.getClass()){
            if(mayorN<CPresidenciales(aeropueroto[i]).cantidadDelegacion){
                mayorN=CPresidenciales(aeropueroto[i]).cantidadDelegacion;
                posMayor=i;
        }
    }
}
    return CPresidenciales(aeropueroto[posMayor]).getPaisProcendecia();
}




int CAeropuerto::getCantidad()
{
    return cantidad;
}

CAeropuerto::CAeropuerto(int n)
{
    aeropueroto=new *CVuelo[n];
    cantidad=0;
}
