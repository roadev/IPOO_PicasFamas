/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.7
 * 
 * Nombre del archivo: 
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include <string>

using namespace std;

#ifndef PICASFAMAS_H
#define	PICASFAMAS_H

class PicasFamas{// aquí se crea la clase Alcancia
public://metodos
    PicasFamas();//constructor
   ~PicasFamas();// destructor
    
    void verificarNumero(int numero);
    
    void setPicas(int value);
    void setFamas(int value);
    void setPrimerDigito(int value);
    void setSegundoDigito(int value);
    void setTercerDigito(int value);
    void setCuartoDigito(int value);
    void setNumeroJugador2(int value);
    int getPicas();
    int getFamas();
    int getPrimerDigito();
    int getSegundoDigito();
    int getTercerDigito();
    int getCuartoDigito();
    int getNumeroJugador2();

    
private://atributos de la clase
    int picas;
	int famas;
	int primerDigito;
	int segundoDigito;
	int tercerDigito;
	int cuartoDigito;
	int numeroJugador2;
};

#endif