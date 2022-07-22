#include <iostream>

using namespace std;

int main() {
	int x, y;
	
	cout << "ingresa dos numeros: "; cin >> x >> y;
	if (x == y) {
		cout << "ambos numeros son iguales" << endl;
	}
	else if (x > y)
	{
		cout << "el numero mayor es " << x;
	}
	else {
		cout << "el numero mayor es " << y;
	}
	
	
	return 0;
}
