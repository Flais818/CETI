#include <iostream>

using namespace std;

//Clase Padre o Super clase
class Cuenta {
	private:
		string titular;
		int num;
		double saldo;
	public:
	Cuenta (string, int, double); //Constructor de la clase Cuenta	
	void depositar ();
	void retirar();
	void mostrarCuenta();
};

//Clase Ahorro hija (hereda)
class Ahorros: public Cuenta {
	private: 
		double tasa;
		int periodo;
	public:
		void calcularInteres();
		Ahorros (string, int, double, double, int ); //Constructor de la clase Ahorro
		void mostrarAhorros();
};

class Cheque: public Cuenta {
	private:
		int cantidad;
	public:
	Cheque (string, int, double, int);
	void cantidadCheque();
	void girarChque();
	void mostarCheques();	
};

//COnstructor de la clase Cuenta
Cuenta::Cuenta (string _titular, int _num, double _saldo){
	titular = _titular;
	num = _num;
	saldo = _saldo;
}

//Constuctor de la clase Ahorro
Ahorros::Ahorros (string _titular, int _num, double _saldo, double _tasa, int _periodo): Cuenta (_titular, _num, _saldo) {
	tasa = _tasa;
	periodo = _periodo;
}

Cheque::Cheque (string _titular, int _num, double _saldo,int _cheque):Cuenta(_titular, _num, _saldo) {
	cantidad = _cheque;
}


void::Cuenta::mostrarCuenta(){
	cout << "Titular: " << titular << endl;
	cout << "Numero: " << num << endl;
	cout << "Saldo: " << saldo << endl;
}

void::Ahorros::mostrarAhorros(){
	mostrarCuenta();
	cout << "Tasa de interes: " << tasa << endl;
	cout << "Periodo: " << periodo << endl;
}

void::Cheque::mostarCheques() {
	mostrarCuenta();
	cout << "Cantidad de cheques: " << cantidad << endl;
}

int main () {
	Cuenta c1("Flais", 13, 1000);
	Cuenta c2("Fer", 8, 100);
	
	c1.mostrarCuenta();
	c2.mostrarCuenta();
	
	return 0;
}
