#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Herencia

int main(int argc, char** argv) 
{
	#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
class Persona {
private:
string nombre;
int edad;
public:
Persona (string nombre, int edad);
void mostrarDatos();
void setNombre(string nombre);
void setEdad(int edad);
int getEdad();
string getNombre();
int getEdad();
~Persona();
Persona ();
};
Persona::Persona (string nombre, int edad){
setNombre (nombre);
setEdad (edad);
}
Persona::~Persona (void) {
}
void Persona::setNombre(string nombre) {
this->nombre= nombre;
}
string Persona::getNombre () {
return nombre;
}
void Persona::setEdad (int edad) {
this-> edad = edad;

}
int Persona::getEdad () {
return edad;
}
void Persona::mostrarDatos () {
cout<<"Ingrea el nombre"<< getNombre << endl;
cout<<"Ingresa la edad"<<getEdad()<<endl;
}
class Empleado {
public: Persona:
{
private:
double sueldo;
public:
Empleado (string, int, double);
void setSueldo(double);
double getSueldo();
void mostrar();
~Empleado(void);
};
};
Empleado::Empleado(string nombre, int edad, double sueldo):
Persona(nombre, edad)
{
setSueldo(sueldo);
}
Empleado:.~Empleado(void)
{
}
void Empleado::setSueldo(double sueldo)
{
this->sueldo = sueldo;
}
Empleado::getSUeldo()
{
return sueldo;
}
double Empleado::getSueldo()
{
return sueldo;
}

void Empleado::mostrar()
{
mostrarDatos();
cout<<"Ingresa el sueldo"<<getSueldo<<endl;
}
class Estudiante {
private:
int registro;
public:
Estudiante(string, int, int);
void setRegistro(int);
int getRegistro();
void mostrar;
~Estudiante(void);
};
Estudiante::Estudiante(string nombre, int edad, int registro) :
Persona(nombre, edad)
{
setRegistro(registro);
}
void Estudiante::setRegistro(int registro)
{
this->registro = registro;
}
int Estudiante::getRegistro()
{
return registro;
}
void Estudiante::mostrar ()
{
mostrarDatos();
cout<<"Ingresa el registro"<<getRegistro()<< endl;
}
Estudiante::~Estudiante(void)
{
}
int main()
{
Persona p;

Empleado e;
Persona p("Flais", 22);
Empleado e("Mike", 19, 1500);
cout<<"Mostrando el Empleado"<<endl;
e.mostrar();
cout<<"Mostrando la Persona"<<endl;
p.mostrarDatos();
cin.get();


return
	
	
	return 0;
}
