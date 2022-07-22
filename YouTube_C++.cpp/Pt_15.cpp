#include <iostream>

using namespace std;

int main() {
	char letter;
	
	cout << "Ingresa un cararacter: "; cin >> letter;
	
	switch (letter) {
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' : cout << "es una vocal minuscula"; break;
		default : cout << "no es un vocal minuscula"; break;	
	}
	
	return 0;
}
