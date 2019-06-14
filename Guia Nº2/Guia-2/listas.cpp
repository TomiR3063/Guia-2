#include "pch.h"
#include "structs.h"
//Ejercicio 3, como es una funcion hay que copiar la definicion en structs.h//

ListaPaty*unaListaPatyCreate(NodoPaty*primerelemento) {
	ListaPaty *unaListaPaty = new ListaPaty;
	unaListaPaty->primerElemento = NULL;
	return unaListaPaty;
}

NodoPaty*unNodoPatyCreate(Paty*unPaty, NodoPaty*siguientepaty) {
	NodoPaty *unNodoPaty = new NodoPaty;
	unNodoPaty->unPaty = unPaty;
	unNodoPaty->siguientePaty = NULL;
	return unNodoPaty;
}

ListaCheddar*unaListaCheddarCreate(NodoCheddar*primerelemento) {
	ListaCheddar*unaListaCheddar = new ListaCheddar;
	unaListaCheddar->primerElemento = NULL;
	return	unaListaCheddar;
}

NodoCheddar*unNodoCheddarCreate(Cheddar*unCheddar, NodoCheddar*siguienteCheddar){
	NodoCheddar*unNodoCheddar = new NodoCheddar;
	unNodoCheddar->unCheddar = unCheddar;
	unNodoCheddar->siguienteCheddar = NULL;
	return unNodoCheddar
}

ListaPanceta*unaListaPancetaCreate(NodoPanceta*primerelemento) {
	ListaPanceta*unaListaPanceta = new ListaPanceta;
	unaListaPanceta->primerELemento = NULL;
	return unaListaPanceta;
}

NodoPanceta*unNodoPanceta(Panceta*unaPanceta, NodoPanceta*siguientePanceta){
	NodoPanceta*unNodoPanceta = new NodoPanceta;
	unNodoPanceta->unaPanceta = unaPanceta;
	unNodoPanceta->siguientePanceta = NULL;
	return unNodoPanceta;
}

//Hay que declarar las funciones para agregar los elemenetos y verficcar si el ultimo elemento es NULL o no//

void listaAgregarCheddar(ListaCheddar*primerElemento, NodoCheddar*siguienteCheddar) {
	if (ListaCheddarVacia(primerElemento)) {
		primerElemento->primerElemento = siguienteCheddar;
	}
	else {
		NodoCheddar*ultimoNodo = ListaCheddarUltimoElemento(primerElemento);
		ultimoNodo->siguienteCheddar = siguienteCheddar;
	}
}

bool listaCheddarVacia(ListaCheddar*primerElemento); {
	return primerElemento->primerElemento == NULL;
}

NodoCheddar*listaCheddarVacia(ListaCheddar*primerElemento) {
	NodoCheddar*nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguienteCheddar != NULL) {
		nodoAuxiliar = nodoAuxiliar->siguienteCheddar;
	}
	return nodoAuxiliar;
}

//Lo mismo, pero con la panceta//

void listaAgregarPaty(ListaPanceta*primerElemento, NodoPanceta*siguientePaty) {
	if (listaPancetaVacia(primerElemento) {
		primerElemento->primerElemento = siguientePanceta;
	}
	else {
		NodoPanceta*ultimoNodo = ListaPancetaUltimoElemento(primerElemento);
			ultimoNodo->siguientePanceta = siguientePaceta;
	}
}

bool listaPancetaVacia(ListaPanceta*primerElemento) {
	return primerElemento->primerElemento == NULL;
}

NodoPanceta*ListaPancetaUltimoElemento(ListaPanceta*primerElemento) {
	NodoPanceta*nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguientePanceta != NULL) {
		nodoAuxiliar = nodoAuxiliar->siguientePanceta;
	}
	return nodoAuxiliar;
}