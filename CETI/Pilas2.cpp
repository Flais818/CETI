#include <iostream>
#include <conio.h>
#include <stdlib.h> //Para el new
//Eliminar elementos de una Pila 


using namespace std;

int main () {
	
	
	
	
	return 0;
}

void sacarPila (Nodo *&pila, int &n) {
	Nodo *aux = pila;       //Paso 1
	n = aux ->dato;         //Paso 2
	pila = aux->siguiente;  //Paso 3
	delete aux;             //Paso 3
	
}
