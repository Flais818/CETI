#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Nodo {
	private:
	string dato;
	Nodo *siguiente;
	public:	
void insertarLista(Nodo *&, string);
void mostarLista(Nodo *);
void buscarLista(Nodo *, string);
void eliminarNodo(Nodo *, string);
void eliminarLista(Nodo *&, string &);


};

//Protoripos de Funciones


int main () {
	Nodo *lista = NULL;
	Nodo obj= Nodo();
int opc;
string dato;
	
	do {
		cout << "\t Menu: \n";
		cout << "1:- Insertar libro en la lista \n";
		cout << "2.- Mostar los libros de la lista \n";
		cout << "3.- Buscar un libro en lista \n";
		cout << "4.- Eliminar un libro de la lista \n";
		cout << "5.- Dejar vacia la lista\n";
		cout << "6.- Salir\n";
		cout << "Opcion: ";
		cin >> opc;
		
		switch(opc){
			case 1:  
			cout << "\n Ingresa el nombre del libro: "; cin >> dato;
			obj.insertarLista(lista, dato);
			cout << "\n";
			system ("pause");
			break;
			
			case 2: 
			obj.mostarLista(lista);
			cout << "\n";
			system ("pause");
			break;
			
			case 3: cout << "\n Ingresa el liobro a buscar: ";
			cin >> dato;
			obj.buscarLista(lista, dato);
			cout << "\n";
			system ("pause");
			break;
			
			case 4: cout << "\n Ingresa el libro a eliminar: ";
			cin >> dato;
			obj.eliminarNodo(lista, dato);
			cout << "\n";
			system ("pause");
			
			case 5: 
				while(lista != NULL){
					obj.eliminarLista(lista, dato);
					cout << dato << "->";
				}
				cout<<"\n";
				system("pause");
				break;
				
		}
		system ("cls");
	}while(opc != 6);
	
	return 0;
}

void Nodo::buscarLista (Nodo *lista, string n){
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
		cout << "Libro" << n << "SI ha sido encontradoen lista\n";
	}
	else {
		cout << "Libro" << n << "NO ha sido enocntrado en lista\n";
	}
	
}



void Nodo::insertarLista(Nodo *&lista, string n) {
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo -> dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while ((aux1 != NULL) && (aux1->dato < n)) {
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
	
if (lista == aux1){
	 lista = nuevo_nodo;
}	
else {
	aux2 -> siguiente = nuevo_nodo;
}

nuevo_nodo -> siguiente = aux1;

cout << "\t libro " << n << " insertado a lista correctamente\n";

}

void Nodo::mostarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while (actual != NULL) {
		cout <<actual->dato<<"-> ";
		actual = actual -> siguiente;
	}
}

void Nodo::eliminarNodo(Nodo *lista, string n){
	if (lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar = lista;
		
		while ((aux_borrar != NULL) && (aux_borrar -> dato !=n)) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar -> siguiente;
		}
		
		if (aux_borrar == NULL){
			cout << "libro no encontrado";
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

void Nodo::eliminarLista (Nodo *&lista, string &n) {
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}
