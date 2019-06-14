#include "pch.h"
#include <sstream>
#include <iostream>

using namespace std;

//Ejercicio N°1//
struct Paty
{
	float precio_paty;
	string nivel_de_grasa_paty;
	int grosor;
};

struct Gaseosa
{
	float precio_gaseosa;
	string marca;
	string sabor;
};

struct Panceta
{
	float precio_panceta;
	string nivel_de_grasa_panceta;
	string punto_de_coccion;
};

struct Cheddar
{
	float precio_cheddar;
	string nivel_de_grasa_cheddar;
};

struct Pan
{
	float precio_pan;
	bool integral;
};

//Ejercicio 3, modelar la hamburguesa implica crear una listaPaty que apunta a unaListaPaty.//
struct Hamburguesa {
	Pan * panSuperior;
	Pan * panInferior;
};

//NodoPaty  es un nexo entre listaPaty y las estructuras Paty//
struct NodoPaty
{
	Paty*unPaty;
	NodoPaty*siguientePaty;
};

struct ListaPaty
{
	NodoPaty *primerElemento;
};

//NodoCheddar  es un nexo entre listaCheddar y las estructuras Cheddar//
struct NodoCheddar
{
	Cheddar*unCheddar;
	NodoCheddar*siguienteCheddar;
};

//Ejercicio 3, modelar la hamburguesa implica crear una listaCheddar que apunta a unaListaCheddar//
struct ListaCheddar
{
	NodoCheddar*primerElemento;
};

struct NodoPanceta
{
	Panceta*unaPanceta;
	NodoPanceta*siguientePanceta;
};

struct ListaPanceta 
{
	NodoPanceta*primerELemento;
};


//Hay que llamar a la funcion del archivo lista//
ListaPaty * unaListaPatyCreate(NodoPaty*primerelemento);
NodoPaty*unNodoPatyCreate(Paty*unPaty, NodoPaty*siguientepaty);
ListaCheddar*unaListaCheddarCreate(NodoCheddar*primerelemento);
NodoCheddar*unNodoCheddarCreate(Cheddar*unCheddar, NodoCheddar*siguienteCheddar);
ListaPanceta*unaListaPancetaCreate(NodoPanceta*primerelemento);
NodoPanceta*unNodoPanceta(Panceta*unaPanceta, NodoPanceta*siguientePanceta);
