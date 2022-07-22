#include <stdlib.h>
#include <conio.h>
#include <iostream>
//Equipo 2-M
//Fabio Trujillo y Fernando leon Medina
//21310387             21110188

using namespace std;
 enum TOrden {ASC, DESC};
class Nodo {
	private:
	string dato;
	Nodo *siguiente;
	Nodo *ant;
	public:	
void insertarLista(Nodo *&, string);
void mostarLista(Nodo *,TOrden);
void buscarLista(Nodo *, string);
void eliminarNodo(Nodo *, string);
void eliminarLista(Nodo *&, string &);



};

//Protoripos de Funciones


int main () {
	Nodo *lista = NULL;
	Nodo obj= Nodo();
	TOrden  orden;
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

			orden=DESC;
				cout<<"\npor delante\n";
			obj.mostarLista(lista,orden);
			
			cout<<"\npor atras\n";
			
					orden=ASC;	
			obj.mostarLista(lista,orden);
			
			cout << "\n";
			system ("pause");
			break;
			
			case 3: cout << "\n Ingresa el liobro a buscar: ";
			cin >> dato;
			obj.buscarLista(lista, dato);
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

     if (lista == NULL) //primer nodo
     {
     
       Nodo * nodo = new Nodo();
       nodo->dato = n;
       lista = nodo;
     }
     else
     {
       Nodo * nodo = new Nodo();
       nodo->dato = n;
       nodo->siguiente = lista;
       lista->ant = nodo ;
       lista = nodo;
       cout << "\t libro " << n << " insertado a lista correctamente\n";
     }



}

void Nodo::mostarLista(Nodo *lista,TOrden orden){
	Nodo *nodo = lista;

    if (nodo == NULL)
    {
       cout << "Lista Vacia\n";
    }
    else if (orden == ASC)
         {
              while (nodo->ant)   //buscamos la cabeza de lista
              {
                 nodo = nodo->ant;
              }


              while(nodo)
              {
                cout << "->" << nodo->dato;
                nodo = nodo->siguiente;
              }
         }
         else
         {
             while (nodo->siguiente)   //buscamos el final de la lista
              {
                 nodo = nodo->siguiente;
              }

              while(nodo)
              {
                cout << "->" << nodo->dato;
                nodo = nodo->ant;
              }
         }
		 
}

void Nodo::eliminarNodo(Nodo *lista, string n){
   Nodo *nodo;

   while(nodo && nodo ->dato < n) nodo = nodo->siguiente;
   while(nodo && nodo->dato > n) nodo = nodo->ant;

   /* El valor v no está en la lista */
   if(!nodo || nodo->dato != n) return;

   /* Borrar el nodo */
   /* Si lista apunta al nodo que queremos borrar, apuntar a otro */
   if(nodo == lista)
     if(nodo->ant) lista = nodo->ant;
     else lista = nodo->siguiente;

   if(nodo->ant) /* no es el primer elemento */
      nodo->ant->siguiente = nodo->siguiente;
   if(nodo->siguiente) /* no es el último nodo */
      nodo->siguiente->ant = nodo->ant;
   delete nodo;
		
	
	
}

void Nodo::eliminarLista (Nodo *&lista, string &n) {
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
   	lista = aux->ant;	
	delete aux;
}
