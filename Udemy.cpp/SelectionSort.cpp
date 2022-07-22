#include <iostream>

/*Algoritmos de ordenacion*/

using namespace std;

//Código de Algoritmo por selección

void bySelectionSort () {
	
	int v[] = {2,7,1,4,3,5,0,8,2,-1,2 };
	int size = sizeof(v)/sizeof(*v);
	
	int aux, PosMin;
	
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";
	
	for (int i=0; i < size; i++) {
		PosMin = i;
		for (int j = i + 1; j < size; j++) {
			if (v[PosMin] > v[j]) PosMin = j;
		}
		aux = v[i];
		v[i] = v[PosMin];
		v[PosMin] = aux;
		
		/*Esto es para ver el paso a paso del ordenamiento
		cout << endl;
		for (int i = 0; i < size; i++) cout << v[i] << " ";*/
	}
	
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";
	
}

int main ( ) {
	
	
	bySelectionSort();
}
