#include<iostream>
#include<conio.h>
#include<stdlib.h>

//equipo
//Fernando Leon Medina
//21110188
//Fabio Giovanmi
//Trujillo garibay
//21310387

using namespace std;

class nodo{

	public:
	int dato;
	nodo *der;
	nodo *izq;
	nodo *padre;
	int cont=0;

void agregarNodo(nodo *&, int,nodo *);
void mostrarArbol(nodo *arbol,int contador);
bool BuscarNodo(nodo *arbol, int n);
void preOrden(nodo *arbol);
void inOrden(nodo *arbol);
void PostOrden(nodo *arbol);
void eliminar(nodo *,int);
void eliminarnodo(nodo *);
void reemplazar(nodo *, nodo *);
void destruirNodo(nodo *);
int numerodehojas(nodo *);
int AlturaArbol(nodo *);
int nodomayor(nodo *);
int borrarmenor(nodo *);



};


int main(){
	int dato, opcion,cont=0;
	nodo obj;
	nodo *arbol = NULL;
	do{
		system ("color 03");
		
		cout<<"\t      °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°      "<<endl;		
		cout<<"\t  °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°  "<<endl;
		cout<<"\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° °°°°"<<endl;
		cout<<"\t° °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° °° °"<<endl;
		cout<<"\t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° "<<endl;		
		cout<<"\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;		
		cout<<"\t° °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° °°"<<endl;
		cout<<"\t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° °"<<endl;	
		cout<<"\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
		cout<<"\t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° °"<<endl;
		cout<<"\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
		cout<<"\t  °°°°°   °°° °°°°°°°°°°°°°°°  °° °°°°°  "<<endl;
		cout<<"\t    °°     °° °°°°°°°°°°°°°° °°   °°    "<<endl;
		cout<<"\t            °° °°°°°°°°°°°°°°°°          "<<endl;
		cout<<"\t    °°°°    °°°°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t   °°°°°°    °°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t     °°°    °°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t       °°°°°°°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t            °°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t            °°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t            °°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t            °°°°°°°°°°°°°°°°°            "<<endl;
		cout<<"\t           °°°°°°°°°°°°°°°°°°°°          "<<endl;
		cout<<"\t         °°°°°°°°°°°°°°°°°°°°°°°°        "<<endl;
		cout<<"\t       °° °° °°° °°°  °° °°° °° °°       "<<endl;
		cout<<"\t     °° °°° °°° °°° °° °° °°° °°° °°     "<<endl;
		cout<<"\t   °°° °°° °°° °ARBOLES°°° °°° °°° °°°   "<<endl;
		cout<<"\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
		
		cout<<"\t °°Numero Total De Nodos          "<<obj.cont<<"   °° "<<endl;
		cout<<"\t °°Numero Total De Nodos Hojas    "<<obj.numerodehojas(arbol)<<"   °° "<<endl;
		cout<<"\t °°Altura De Arbol                "<<obj.AlturaArbol(arbol)<<"  °° "<<endl;
		cout<<"\t °°1. Agregar Elementos al Arbol.     °° "<<endl;
		cout<<"\t °°2. Mostrar el Arbol Completo.      °° "<<endl;
		cout<<"\t °°3. Buscar Un Elemento en el Arbol. °° "<<endl;
		cout<<"\t °°4. Recorrer el Arbol en PREORDEN.  °° "<<endl;
		cout<<"\t °°5. Recorrer el Arbol en INORDEN.   °° "<<endl;
		cout<<"\t °°6. Recorrer el Arbol en POSTORDEN. °° "<<endl;
		cout<<"\t °°7. Eliminar un nodo del Arbol.     °° "<<endl;
		cout<<"\t °°8. Mostrar Nodo Mayor del Arbol.   °° "<<endl;
		cout<<"\t °°9. Eliminar Nodo Menor del Arbol.  °° "<<endl;
		cout<<"\t °°10. Salir.                         °° "<<endl;
		cout<<"\t========================================="<<endl;
		cout<<"\t\n\t   Opcion: \n\t   ";
		cin>>opcion;
		
		switch(opcion){
			case 1:	cout<<"\tNumero a agregar: ";
					cin>>dato;
					obj.agregarNodo(arbol,dato,NULL);
					obj.cont++;
					break;
			case 2:cout<<"\tMostrar el Arbol Completo: \n\n";
			
					obj.mostrarArbol(arbol,cont);
	
			break;
			case 3: cout<<"\tIngresa el Elemento A Buscar\n\t";
					cin>>dato;
			if(obj.BuscarNodo(arbol,dato)==true){
					cout<<"\tEl Elemento "<<dato<<" ha Sido Encontrado en El Arbol\n";
			}
			else{
				cout<<"\tEl elemento no se encuentra en el Arbol\n";
			}
			break;
		
			case 4: cout<<"\tPREORDEN\n\t";
					obj.preOrden(arbol);
			
			break;
			
			case 5: cout<<"\tINORDEN\n\t";
					obj.inOrden(arbol);
			break;
			
			case 6: cout<<"\tPOSTORDEN\n\t";
					obj.PostOrden(arbol);
			break;
			
			case 7: cout<<"\tIngresa el Nodo A eliminar\n\t";
					cin>>dato;
           	 	obj.eliminar(arbol,dato);
            	obj.cont--;
			break;
				case 8:
					cout<<"\tNodo Mayor "<<obj.nodomayor(arbol)<<endl;
			break;
				case 9:
					cout<<"\tNodo menor:\n\t"<<obj.borrarmenor(arbol)<<" a sido Eliminado del Arbol\n"<<endl;
					obj.eliminar(arbol,obj.borrarmenor(arbol));
			break;
			
		}
		
		system("pause");
		system("cls");
	}while(opcion != 10);
	
	
	
	getch();
	return 0;
}

 nodo *crearNodo(int n,nodo *padre){
	nodo *NuevoNodo = new nodo();
	NuevoNodo->dato = n;
	NuevoNodo->der = NULL;
	NuevoNodo->izq = NULL;
	NuevoNodo->padre = padre;

	return NuevoNodo;
}
void nodo :: agregarNodo(nodo *&arbol, int n,nodo *padre){
	if(arbol == NULL){//verificando que arbol este vacio.
		nodo *nuevoNodo = crearNodo(n,padre);//agregando la raiz al nuevo nodo.
		arbol = nuevoNodo;
		cout<<("Nodo raiz creado")<<endl;
	}else{
		int ValorDeRaiz = arbol->dato;//Es para saber que valor tiene la RAIZ.
		if(n < ValorDeRaiz){//Cuando el Valor es menor va al lado izquierdo.
			agregarNodo(arbol->izq,n,arbol);//Agregando al lado izquierdo.
			cout<<("Nodo izquierdo creado")<<endl;
		}else{
			agregarNodo(arbol->der,n,arbol);//Agregando al lado derecho.
			cout<<("Nodo derecho creado")<<endl;
		}
	}
}
void nodo :: mostrarArbol(nodo *arbol,int cont){
	
	if(arbol==NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"    ";
		}
		cout<<arbol->dato<<endl;
			mostrarArbol(arbol->izq,cont+1);
	}
}
	
	//Buscar Nodo
bool nodo :: BuscarNodo(nodo *arbol, int n){
 if(arbol == NULL){
  return false;
 }
 else if(arbol->dato == n){//El nodo actual es igual al nodo que se busca, Encuentra el nodo
  return true;
  }
  else if(n<arbol->dato){
  	return 	BuscarNodo(arbol->izq,n);
  }
  else{
  	return BuscarNodo(arbol->der,n);
  }
  
}
void nodo :: preOrden(nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}
void nodo :: inOrden(nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}
void nodo :: PostOrden(nodo *arbol){
		if(arbol==NULL){
		return;
	}
	else{
		
		inOrden(arbol->izq);
		inOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
	
}
//determinar el nodo mas izquierdo posible

nodo *minimo(nodo* arbol){
if(arbol==NULL){
	return NULL;
}	
if(arbol->izq){//aqui si se cumple vamos a seguir llendo al lado izquierdo con recursividad
	return minimo(arbol->izq);//asi hasta que llegue al nodo mas izquierda posible
}
	else{//si no tiene mas nodos izquierdo solo retornamos el valor del nodo actual
		return arbol;
	}
	
}

//eliminar un nodo del arbol
void nodo :: eliminar(nodo *arbol,int n){
	if(arbol==NULL){
		return;
	}
	else if(n<arbol->dato){//si el valor es menor busca por la izquierda
		eliminar(arbol->izq,n);
		
	}
		else if(n<arbol->dato){//si el valor es mayor busca por la derecha
		eliminar(arbol->der,n);
	}
	else{//aqui si ya encontro el valor retorna a nuestra funcion de eliminar nodo
		eliminarnodo(arbol);
	}
}
//funcion para remplazar el nodo

void nodo :: reemplazar(nodo *arbol, nodo *nuevoNodo){
	if(arbol->padre){
		//aqui a nuestro arbol padre hay que asignarle un nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq=nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){
		//AQUI SE PROCEDE AGREGARLE UN NUEVO PADRE
		nuevoNodo->padre=arbol->padre;
	}
	
	
}

//funcion de destruir nodo
void nodo :: destruirNodo(nodo *nodo){
	nodo->der=NULL;
	nodo->izq=NULL;
	delete nodo;
	
}
//funcion para eliminar el nodo
void nodo :: eliminarnodo(nodo *nodoEliminar){
	if(nodoEliminar->der&&nodoEliminar->izq){
		nodo *menor=minimo(nodoEliminar->der);
		nodoEliminar->dato=menor->dato;//aqui para eliminar vamos asignar el valor que queda a la derecha despues 
		//de encontrar el ultimo nodo de la izquierda asi sustituir y recorrer el ulltimo nodo
    eliminarnodo(menor);	
	}
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{//en caso de que el nodo no sea un nodo padre y no tenga hijos
			reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
	
}
int nodo::numerodehojas(nodo *arbol){
  if (arbol == NULL)
  {
   return 0;
  }
   if ((arbol->der == NULL) && (arbol->izq == NULL))//aqui verificamos que el nodo siguiente sea igual a null para retornar un 1
  {
  return 1;
  }
  else
  {
 return numerodehojas(arbol->der) +numerodehojas(arbol->izq);//en caso de que tenga valor el nodo de la 
 //derecha y izquierda hacemos una funcion recursiva para repetir 
 //el proceso hasta llegar al ultimo dato
 }
}


int nodo::AlturaArbol(nodo *altura){
 int x, y;
 	if (altura == NULL)
 		return -1;
 	else
 		{
 	y = AlturaArbol(altura->izq);
 	x = AlturaArbol(altura->der);
 	if (y > x)
 		return y + 1;
 	else
 		return x + 1;
 	}

	
}
int nodo::nodomayor(nodo *nodo){
	int num = nodo->dato;
	
 while(nodo->der != NULL)//nos ayuda a detectar cual es el valor mas grande del arbol sabiendo que el 
 //ultimo nodo por la derecha no sea un valor nulo
 {
 nodo= nodo->der;
 num = nodo->dato;
 }
 return num;
	
}
int nodo::borrarmenor(nodo *nodo){
	int num = nodo->dato;
 int aux = nodo->dato;
 while (nodo->izq != NULL)//nos ayuda a encontrar los datos guardos en el ultimo nodo antes de un null
 {
 nodo = nodo->izq;
 num = nodo->dato;
 }
 
 return num;//aqui retornamos el valor para despues usarlo en nuestra funcion que borra todos los nodos
}
