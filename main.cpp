/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 02/09/14
 * Versión: 0.7
 * 
 * Nombre del archivo: Alcancia.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "PicasFamas.h"

int main()
{
	PicasFamas picasyfamas;
	int valor;
	cout <<"¡ Bienvenido :) !" <<endl;
	//Jugador 1
	picasyfamas.setPrimerDigito(4);
	picasyfamas.setSegundoDigito(5);
	picasyfamas.setTercerDigito(2);
	picasyfamas.setCuartoDigito(8);
	//jugador 2
	while(picasyfamas.getPicas() != 4)
	{
		cout <<"Digita un número para jugar: ";
		cin >> valor;
		picasyfamas.verificarNumero(valor);
		if(picasyfamas.getPicas() == 4)
		{
			cout << valor <<"-> ¡Número correcto!"<<endl;
		}
		else
		{
			cout << valor <<"-> "<< picasyfamas.getPicas() << " picas, "<<picasyfamas.getFamas()<< " famas" <<endl;
		}
		
	}
	cout <<"Gracias por Venir ;)";

	
}