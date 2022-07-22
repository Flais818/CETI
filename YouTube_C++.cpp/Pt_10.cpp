#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float x, y, resul=0;
	
	cout << "ingresa el valor de x: "; cin >> x;
	cout << "ingresa el valor de y: "; cin >> y;
	
	resul = (sqrt(x)) / (pow (y,2)-1);
	
	/*
	sqrt = raiz cuadrada
	pow = potencia 
	*/
	
	cout << "\nel resultado es: " << resul << endl;
	
	return 0;
}
