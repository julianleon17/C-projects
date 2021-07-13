#include <stdio.h>
#include <string.h>


void binaryConverter( int num ) {

  int quotient;
  int residue;
  int size = 0;
  int binaryNumber[8];

  while ( quotient != 1 ) {

    quotient = ( ( size == 0 ) ? num : quotient / 2 ); // Ternary Operator
    residue = quotient % 2;

    binaryNumber[size] = residue;

    size++;
  }

  for ( int i=size; i>=0; i-- ) {

    if ( i == size ) { continue; }
    printf( "%i", binaryNumber[i] );
  }

  printf( "\n" );
}


int main() {

  int number;

  printf( "\n    Conversor de Numeros enteros a Binario\n\n\n" );

  printf( "Ingresa el numero a converir : " );
  scanf( "%i", &number );

  binaryConverter( number );

  return 0;
}
