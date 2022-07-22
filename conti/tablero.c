#include <stdio.h>
#include <string.h>

int main()
{
  int f, c;
  
  printf ("Ingresa la fila: ");
  scanf ("%d", &f);
  
  printf ("Ingresa la columna del 1 al 8 siendo a el numero 1 y así sucesivamente hasta la g: ");
  scanf ("%d", &c);
  
  switch (c) {
  	case 1: if (f %2) {
  		printf ("NEGRO\n");
	  }
	  else {
	  	printf ("BLANCO\n");
	  }
	  break;
	  case 2:
	  	if (f %2) {
	  		printf ("BLANCO\n");
		  }
		  else {
		  	printf ("NEGRO\n");
		  }
	  	break;
	  case 3: if (f %2) {
	  	printf ("NEGRO\n");
	  }
	  else {
	  	printf ("BLANCO\n");
	  }
	  break;
	  case 4: if (f %2) {
	  		printf ("BLANCO\n");
		  }
		  else {
		  	printf ("NEGRO\n");
		  }
	  	break;
	  	case 5: if (f %2) {
	  	printf ("NEGRO\n");
	  }
	  else {
	  	printf ("BLANCO\n");
	  }
	  break;
	  case 6: if (f %2) {
	  		printf ("BLANCO\n");
		  }
		  else {
		  	printf ("NEGRO\n");
		  }
	  	break;
	  	case 7:  if (f %2) {
	  	printf ("NEGRO\n");
	  }
	  else {
	  	printf ("BLANCO\n");
	  }
	  break;
	  case 8: if (f %2) {
	  		printf ("BLANCO\n");
		  }
		  else {
		  	printf ("NEGRO\n");
		  }
	  	break;
	  
	  
}
		
  
  
	return 0;
  }
