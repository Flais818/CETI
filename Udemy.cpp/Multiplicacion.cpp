#include <iostream>

using namespace std;

int main () {
	int a, b, value = 0;
	
	cout << "Ingresa el numero a: " << endl; cin >> a;
	cout << "Ingresa el numero b: " << endl; cin >> b;
	
	while (a) {
		a--;
		value += b;
	}
	
	cout << "a * b = " << value << endl; 
	
	return value;
}


