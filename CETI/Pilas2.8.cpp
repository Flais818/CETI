#include <iostream>
#include <conio.h>
#include <stdlib.h> //Para el new
//Agregar elementos a una Pila

using namespace std;

//Estructura tipo Nodo
struct Nodo {
	int dato;
	Nodo *siguiente;
};

//Prototipo
void agregarPila (Nodo  *&,int);
void sacarPila (Nodo *&, int &);


int main() {
	Nodo *pila = NULL;
		int n[100], i=0, residuo, num, c;
	
	cout << "Digite un num: " << endl; 
    cin >> num;
    while(num>0){
    	n[i]=num%2;
    	num=num/2;
    	agregarPila (pila, n[i]);
		i++;	 	
	}
	
	
	/*
	cout << "Digite otro num: " << endl; cin >> dato;
	agregarPila(pila, num);
	*/
	cout << "\nSacando elementos de la pila: " << endl;

	while (pila != NULL) { //Mientras no sea el final de Pila
	sacarPila(pila, num);
		if (pila != NULL) {
			cout << num << " , ";
		}
		else {
			cout << num << " . ";
		}

	}
	
	return 0;
}

void agregarPila (Nodo *&pila, int n) {
	Nodo *nuevo_nodo = new Nodo(); //Paso 1 Reservavr memoria
    nuevo_nodo ->dato = n;         //Paso 2 Igualalr el dato 
	nuevo_nodo->siguiente = pila;      //Paso 3 Puntero = pila
	pila = nuevo_nodo;                 //Paso 4 Pila = nuevo_nodo

	
	
	
	
	cout << "\nElemento " << n << " agregado a Pila correctamente" << endl;
	
}

void sacarPila (Nodo *&pila, int &n) {
	Nodo *aux = pila;       //Paso 1 Crear la variable aux 
	n = aux ->dato;         //Paso 2 n igual a aux. Tomar valor a eliminar
	pila = aux->siguiente;  //Paso 3 Pasar al nodo que sigue 
	delete aux;             //Paso 3 Eliminar nodo
	
	
}
