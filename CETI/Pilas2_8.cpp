#include <iostream>
#include <conio.h>
#include <stdlib.h> 

using namespace std;

class Nodo {
	private:
	int dato;
	Nodo *siguiente;
	public:
    void agregarPila (Nodo  *&,int);
    void sacarPila (Nodo *&, int &);
};

void Nodo::agregarPila(Nodo *&pila, int n){
		Nodo *nuevo_nodo = new Nodo(); 
    nuevo_nodo ->dato = n;        
	nuevo_nodo->siguiente = pila;      
	pila = nuevo_nodo;                
	cout << "\nElemento " << n << " agregado a Pila correctamente" << endl;
	
}
void Nodo::sacarPila (Nodo *&pila, int &n){

	Nodo *aux = pila;     
	n = aux ->dato;         
	pila = aux->siguiente;  
	delete aux;            
}

int main() {
	Nodo *pila = NULL;
	Nodo obj=Nodo();
		int n[100], i=0, residuo, num, c;
	
	cout << "Digite un num: " << endl; 
    cin >> num;
    while(num>0){
    	n[i]=num%2;
    	num=num/2;
    	obj.agregarPila (pila, n[i]);
		i++;	 	
	}
	
	
	cout << "\nSacando elementos de la pila: " << endl;

	while (pila != NULL) { 
	obj.sacarPila(pila, num);
		if (pila != NULL) {
			cout << num << " , ";
		}
		else {
			cout << num << " . ";
		}

	}
	
	return 0;
}


