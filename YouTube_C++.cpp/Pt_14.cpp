#include <iostream>

using namespace std;

int main() {
	int num;
	
	cout << "ingresa un numero: "; cin >> num;
	
	if (num==0) {
		cout << "el numero es 0" << endl;
	}
	else if (num %2==0) {
		cout << "el numero es par" << endl;
	}
	else {
		cout << "el numero es impar" << endl;
	}
	
	
	
	return 0;
}
