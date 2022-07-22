#include <iostream>

using namespace std;

int main () {
	float a, b, c, d, resul=0;
	cout << "Ingresa el valor de a: "; cin >> a;
	cout << "Ingresa el valor de b: "; cin >> b;
	cout << "Ingresa el valor de c: "; cin >> c;
	cout << "Ingresa el valor de d: "; cin >> d;
	
	resul = a + (b / (c - d));
	
	cout.precision(4);
	cout << "\nEl resultado es " << resul << endl;
	
	
	return 0;
}
