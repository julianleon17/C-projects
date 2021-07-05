#include <stdio.h>
#include <string.h>

int main() {

  //Sentencia fibonacci

  long int num1;
  long int num2;
  long int result;
  int head;
  int tail;

  printf( "\nSUCESION DE FIBONACCI\n\n Representa la sucesion en el rango de numeros que desees.\n\
  Te aclaro que puedes comenzar desde la vuelta 0 que sería la primera\
  \nQuiero que vaya desde la vuelta numero: " );
  scanf( "%i", &head );

  printf( "Hasta la numero : " );
  scanf( "%i", &tail );

  printf( "\n============\n" );
  int accountant = 0;

  for( int i=0; i <= tail; i++ ) {

    if ( i == 0 ) { num1 = 0; num2 = 1; continue; }

    result = num1 + num2;

    if ( accountant >= head ) {
      printf( "(%i)%ld + %ld = %ld \n", accountant, num1, num2, result );
    }

    num1 = num2;
    num2 = result;
    accountant ++;
  }

  return 0;
}
