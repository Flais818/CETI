#include <iostream>

/*Algoritmos de ordenacion*/

using namespace std;

/*Bubble sort o intercambio*/


void byBubbleSort () {
	
	int v[] = {2,7,1,4,3,5,0,8,2,-1,2 };
	int size = sizeof(v)/sizeof(*v);
	
	int aux;
	int rounds = 0;
	bool ord = false;
	
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";
	
	while (!ord) {
		
		ord = true;
		for (int i=0; i < size - 1 - rounds; i++) {
			if (v[i] > v[i +1]) {
				
				aux = v[i +1];
				v[i +1] = v[i];
				v[i] = aux;
				
				ord = false;
			}
		}
		rounds ++;
		/*Esto es para ver el paso a paso del ordenamiento
		cout << endl;
		for (int i = 0; i < size; i++) cout << v[i] << " "; */		
		
	}
	
	cout << endl;
	for (int i = 0; i < size; i++) cout << v[i] << " ";
	
}

int main () {
	
	//callOperations();
	//callArrays();
	
	byBubbleSort();
}
