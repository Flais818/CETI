#include <iostream>

using namespace std;

int main() {
	int a, b, value = 0;
	cout << "Ingresa un valor: "; cin >> a;
	cout << "Ingresa el valor que quieres restar: "; cin >> b;
	while (a > b)	{
		b++;
		value++;
	}
	cout << "La difefencia es " << value << endl;
	
	return 0;
}

