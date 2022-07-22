#include <iostream>

using namespace std;

int divAlg (int a, int b) {
	int value = 0;
	while (a >= b) {
		value++;
		a -= b;
	}	 
	
	cout <<"6 / 3 = " << value << "(" << a << ")" << endl;
	
	return value;
}

int main () {
	divAlg (6, 3); 
}
