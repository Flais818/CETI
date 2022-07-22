#include <iostream>

using namespace std;

int main()
{
    char frase [100];
    int a=0, e=0, i=0, o=0, u=0, v=0;
    
    system ("color 03");
    printf("Ingrese la frase: ");
    cin.getline (frase, 100, '\n');
    
    for (int c=0; c<100; c++){
        switch(frase[c]) {
            case 'a': a++;
            break;
            case 'e': e++;
            break;
            case 'o': o++;
            break;
            case 'i': i++;
            break;
            case 'u': u++;
            break;
        }
        
    }
    
    v = a+e+i+o+u;
    
    printf("Numero de vocales es: %d\n", v);

    return 0;
}
