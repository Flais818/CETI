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
	virtual void mostrar();
};


//Clase Ahorro hija (hereda)
class Ahorros: public Cuenta {
	private: 
		double tasa;
		int periodo;
	public:
		void calcularInteres();
		Ahorros (string, int, double, double, int ); //Constructor de la clase Ahorro
		void mostrar();
};

//Clase Chque hija (hereda)
class Cheque: public Cuenta {
	private:
		int cantidad;
	public:
	Cheque (string, int, double, int);
	void cantidadCheque();
	void girarChque();
	void mostar();	
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

//Constructor de clase Cheque
Cheque::Cheque (string _titular, int _num, double _saldo,int _cheque):Cuenta(_titular, _num, _saldo) {
	cantidad = _cheque;
}


void Cuenta::mostrar(){
	cout << "Titular: " << titular << endl;
	cout << "Numero: " << num << endl;
	cout << "Saldo: " << saldo << endl;
}


void Ahorros::mostrar(){
	Cuenta::mostrar();
	cout << "Tasa de interes: " << tasa << endl;
	cout << "Periodo: " << periodo << endl;
}

void Cheque::mostar() {
	Cuenta::mostrar();
	cout << "Cantidad de cheques: " << cantidad << endl;
}



int main () {
	Cuenta * c[2];
	
	c[0] = new Cuenta ("Flais", 12, 899); 
	c[1] = new Cuenta ("Maria", 11, 500);
	
	
	c[0] -> mostrar();
	cout << "\n";
	c[1] -> mostrar();
	
	
	return 0;
}
