#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona {
		private: //Atributios
			string nombre;
			int edad;
		public: //Metodos
		Persona (string, int);	//Constructor
		void mostrarPersona();
		
	};
	
	//CLase hija de Persona
class Alumno: public Persona {
	private: //Atributos
		string codigoAlumno;
		float notaFinal;
	public: //Metdodos
		Alumno(string, int, string, float);  //Constructor de la clase Alumno
		void mostrarAlumno();
};

	
	//Constructor de la clasePersona (Clase PAdre)
Persona::Persona(string _nombre, int _edad){
	nombre=_nombre;
	edad=_edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal):Persona(_nombre, _edad) {
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

void::Persona::mostrarPersona(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void::Alumno::mostrarAlumno(){
	mostrarPersona();
	cout << "Codigo Alumno: " << codigoAlumno << endl;
	cout << "Nota Final: " << notaFinal << endl;
}


int main () {
	Alumno alumno1("Flais", 22, "21310387", 98.5 );
	
	alumno1.mostrarAlumno();


return 0;

}


