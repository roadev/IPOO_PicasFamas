/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.7
 * 
 * Nombre del archivo: 
 * Responsabilidad: 
 * Colaboración: 

 */

#include "PicasFamas.h"
#include <iostream>
using namespace std;

PicasFamas::PicasFamas()
{
	picas=0; 
	famas=0;
	primerDigito=0;
	segundoDigito=0;
	tercerDigito=0;
	cuartoDigito=0;
	numeroJugador2=0;
}

PicasFamas::~PicasFamas()
{
	//Método destructor
}

void PicasFamas::verificarNumero(int numero) 
{
	int num1, num2, num3, num4;
	
		num4 = numero % 10;
		numero = numero / 10;
		num3 = numero % 10;
		numero = numero / 10;
		num2 = numero % 10;
		numero = numero / 10;
		num1 = numero % 10;		
		
		setPicas(0);
		setFamas(0);
		
		if(primerDigito  == num4){ famas = famas+1; }
		if(primerDigito  == num3){ famas = famas+1; }
		if(primerDigito  == num2){ famas = famas+1; }
		if(primerDigito  == num1){ picas = picas+1; }
		
		if(segundoDigito  == num4){ famas = famas+1; }
		if(segundoDigito  == num3){ famas = famas+1; }
		if(segundoDigito  == num2){ picas = picas+1; }
		if(segundoDigito  == num1){ famas = famas+1; }
		
		if(tercerDigito  == num4){ famas = famas+1; }
		if(tercerDigito  == num3){ picas = picas+1; }
		if(tercerDigito  == num2){ famas = famas+1; }
		if(tercerDigito  == num1){ famas = famas+1; }
		
		if(cuartoDigito  == num4){ picas = picas+1; }
		if(cuartoDigito  == num3){ famas = famas+1; }
		if(cuartoDigito  == num2){ famas = famas+1; }
		if(cuartoDigito  == num1){ famas = famas+1; }

	
} 

void PicasFamas::setPicas(int value)
{
	picas = value;
} 

void PicasFamas::setFamas(int value) 
{
	famas = value;
}

void PicasFamas::setPrimerDigito(int value) 
{
	primerDigito = value;
} 

void PicasFamas::setSegundoDigito(int value) 
{
	segundoDigito = value;
} 

void PicasFamas::setTercerDigito(int value) 
{
	tercerDigito = value;
} 

void PicasFamas::setCuartoDigito(int value) 
{
	cuartoDigito = value;
} 

int PicasFamas::getPicas() 
{
	return picas;
} 

int PicasFamas::getFamas() 
{
	return famas;
} 

int PicasFamas::getPrimerDigito()
{
	return primerDigito;
}  

int PicasFamas::getSegundoDigito() 
{
	return segundoDigito;
} 

int PicasFamas::getTercerDigito() 
{
	return tercerDigito;
} 

int PicasFamas::getCuartoDigito()
{
	return cuartoDigito;
} 

int PicasFamas::getNumeroJugador2()
{
	return numeroJugador2;
} 

void PicasFamas::setNumeroJugador2(int value)
{
	numeroJugador2 = value;
}