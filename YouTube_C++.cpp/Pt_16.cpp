#include <iostream>

using namespace std;


int main() {
	int edad;
		
	cout << "Ingresa la edad: "; cin >> edad;
	
	if (18 <= edad >= 25)
	{
		cout << "esta dentro del rango" << endl;
	}
	else {
		cout << "esta fuera del rango" << endl;
	}
	
	
	return 0;
}
