#include "pch.h"
#include "structs.h"
#include <sstream>
#include <iostream>

using namespace std;

//Ejercicio N°2 - B//
const double iva = 0.21;

double calcularIva(double precioSinIva) {
	return precioSinIva * (1 + iva);
}

//Ejercicio N°2 - B//
double patyPrecioFinalConIva(Paty* unPaty) {
	return calcularIva(unPaty->precio_paty);
}

double gaseosaPrecioFinalConIva(Gaseosa * unaGaseosa) {
	return calcularIva(unaGaseosa->precio_gaseosa);
}

double pancetaPrecioFinalConIva(Panceta * unaPanceta) {
	return calcularIva(unaPanceta->precio_panceta);
}

double cheddarPrecioFinalConIva(Cheddar * unCheddar) {
	return calcularIva(unCheddar->precio_cheddar);
}

double panPrecioFinalConIva(Pan * unPan) {
	return calcularIva(unPan->precio_pan);
}

//Prueba punto 5//

double hamburguesaCalcularPrecio(Hamburguesa *unaHamburguesa) {

}