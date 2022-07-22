#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

//Protoripos de Funciones
void insertarLista (Nodo *&, int);
void mostarLista (Nodo *);
void menu();
void buscarLista(Nodo *, int);
void eliminarNodo (Nodo *, int);
void eliminarLista (Nodo *&, int &);

Nodo *lista = NULL;

int main () {
	menu();
	
	
	return 0;
}

void buscarLista (Nodo *lista, int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while ((actual != NULL) && (actual -> dato <= n)){
		if (actual -> dato == n){
			band = true;
		}
		actual = actual->siguiente;
	} 
	
	if (band == true ){
		cout << "Elemento" << n << "SI ha sido encontradoen lista\n";
	}
	else {
		cout << "Elemento" << n << "NO ha sido enocntrado en lista\n";
	}
	
}

void menu(){
	int opc, dato;
	
	do {
		cout << "\t Menu: \n";
		cout << "1:- Insertar elementos en la lista \n";
		cout << "2.- Mostar los elemnetos de la lista \n";
		cout << "3.- Buscar un elemento en lista \n";
		cout << "4.- Eliminar un elemento de la lista \n";
		cout << "5.- Dejar vacia la lista\n";
		cout << "6.- Salir\n";
		cout << "Opcion: ";
		cin >> opc;
		
		switch(opc){
			case 1:  
			cout << "\n Digite un numero: "; cin >> dato;
			insertarLista(lista, dato);
			cout << "\n";
			system ("pause");
			break;
			
			case 2: 
			mostarLista(lista);
			cout << "\n";
			system ("pause");
			break;
			
			case 3: cout << "\n Digita el num a buscar: ";
			cin >> dato;
			buscarLista(lista, dato);
			cout << "\n";
			system ("pause");
			break;
			
			case 4: cout << "\n Digita el elemento a elimianr: ";
			cin >> dato;
			eliminarNodo(lista, dato);
			cout << "\n";
			system ("pause");
			
			case 5: 
				while(lista != NULL){
					eliminarLista(lista, dato);
					cout << dato << "->";
				}
				cout<<"\n";
				system("pause");
				break;
				
		}
		system ("cls");
	}while(opc != 6);
}

void insertarLista (Nodo *&lista, int n) {
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo -> dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while ((aux1 != NULL) && (aux1->dato < n)) {
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
	
if (lista == aux1){
	 lista == nuevo_nodo;
}	
else {
	aux2 -> siguiente = nuevo_nodo;
}

nuevo_nodo -> siguiente = aux1;

cout << "\t Elemento " << n << " insertado a lista correctamente\n";

}

void mostrarLista (Nodo *lista) {
	Nodo *actual = new Nodo();
	actual = lista;
	
	while (actual != NULL) {
		cout <<actual->dato<<"-> ";
		actual = actual -> siguiente;
	}
}

void eliminarNodo (Nodo *&lista, int n){
	if (lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar = lista;
		
		while ((aux_borrar != NULL) && (aux_borrar -> dato !=n)) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar -> siguiente;
		}
		
		if (aux_borrar == NULL){
			cout << "Elemento no encontrado";
		}
		else if (anterior == NULL) {
			lista = lista -> siguiente;
			delete aux_borrar;
		}
		else {
			anterior -> siguiente = aux_borrar -> siguiente;
			delete aux_borrar;
		}
	}
}

void eliminarLista (Nodo *&lista, int &n) {
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}