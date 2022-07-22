#include <iostream>

using namespace std;

//Estructuras condicionales

int main() {
	int num, dato = 5;
	
	cout << "ingresa un #: "; cin >> num;
	
	if (num == dato) {
		cout << "el numero es igual a 5" << endl;
	}
	else {
		cout << "el numero es distinto de 5" << endl;
	}
	/*
	= es para asignacion
	== es para comparar, operador de igualdad 
	!= es para diferencia
	>= mayor o igual
	<= menor o igual
	*/
	
	return 0;
}
