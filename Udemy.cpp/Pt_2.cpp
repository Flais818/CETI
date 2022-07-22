#include <iostream>

using namespace std;

int subAlg (int a, int b) {
	int value = 0;
	while (a > b) {
		b++;
		value++;
	}	
	return value;
	
}

int main () {
	cout <<"5 - 1 = " << subAlg(5,1) << endl;
	return 0;
}
