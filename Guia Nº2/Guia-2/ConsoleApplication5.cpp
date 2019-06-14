#include "pch.h"
#include <iostream>
#include <sstream>
#include "structs.h"

using namespace std;





//Ejercicio N°2 - A//
Paty* patyCreate(float precio_paty, string nivel_de_grasa_paty, int grosor) {
	Paty * unPaty = new Paty;
	unPaty->precio_paty = precio_paty;
	unPaty->nivel_de_grasa_paty = nivel_de_grasa_paty;
	unPaty->grosor = grosor;
	return unPaty;
}

Gaseosa* gaseosaCreate(float precio_gaseosa, string marca, string sabor)
{
	Gaseosa * unaGaseosa = new Gaseosa;
	unaGaseosa->precio_gaseosa = precio_gaseosa;
	unaGaseosa->marca = marca;
	unaGaseosa->sabor = sabor;
	return unaGaseosa;
}

Panceta* pancetaCreate(float precio_panceta, string nivel_de_grasa_panceta, string punto_de_coccion)
{
	Panceta * unaPanceta = new Panceta;
	unaPanceta->precio_panceta = precio_panceta;
	unaPanceta->nivel_de_grasa_panceta = nivel_de_grasa_panceta;
	unaPanceta->punto_de_coccion = punto_de_coccion;
	return unaPanceta;
}

Cheddar * cheddarCreate(float precio_cheddar, string nivel_de_grasa_cheddar)
{
	Cheddar * unCheddar = new Cheddar;
	unCheddar->precio_cheddar = precio_cheddar;
	unCheddar->nivel_de_grasa_cheddar = nivel_de_grasa_cheddar;
	return unCheddar;
};

Pan * panCreate(float precio_pan, bool integral)
{
	Pan * unPan = new Pan;
	unPan->precio_pan = precio_pan;
	unPan->integral = integral;
	return unPan;
};

int main()
{
    std::cout << "Hello World!\n"; 
}

