#include <iostream>

using namespace std;

int main () {
	int x, y, aux;
	
	cout << "ingresa x: ";  cin >> x;
	cout << "ingresa y: ";  cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "\n El nuevo valor de x es: " << x << endl;
	cout << "El nuevo valor de y: " << y << endl;
	
	return 0;
}
