#include <iostream>

using namespace std;

//video pt 6
int main() {
    float a, b, resul = 0;

    cout<<"Ingresa el valor a: "<<endl; cin>>a;
    cout<<"Ingresa el valor b: "<<endl; cin>>b;
    resul=(a/b)+1;
    cout.precision(2); //esto es para los decimales que se desean ver incluido antes del punto decimal 
    cout<<"\nEl resultado es "<<resul<<endl;

    return 0;
}
