#include <iostream>

using namespace std;

int main () {
	float prac, teo, par, final = 0;
	
	cout << "Ingresa la nota de practica : " << endl; cin >> prac;
	cout << "Ingresa la nota de teorica : " << endl; cin >> teo;
	cout << "Ingresa la nota de participacion : " << endl; cin >> par;
	
	prac *= 0.3;
	teo *= 0.6;
	par *= 0.1;
	
	final = prac + teo + par;
	
	cout << "La nota final es : " << final << endl;
	
	
	return 0;
}
