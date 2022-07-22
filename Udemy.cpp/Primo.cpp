#include <iostream>

using namespace std;

int facAlg (int a, int b) {
	int value = 1;
	for  (int i = 1; i <= a; i)
	
	
	return 0;
}

//OPTIMIZACIÓN

void verifyPrime (int number) {
	bool prime = true;
	for (int i =2; i < number/2 && prime ; i++)
		if (number % i == 0) prime = false;
	
	if (prime) cout << number << " Es primo" << endl;
	else cout << number << " No es primo" << endl;
}


int main (){
	
	verifyPrime (100);
}
