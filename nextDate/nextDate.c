#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program will tell you the date in the number of days you choose

int main( int argc, const char *argv[] ) {

  time_t oneDay = 24 * 60 *60, today = time( NULL ), nextDate;
  int num;

  printf( "\n\nEnter the number of days : " );
  scanf( "%i", &num );

  nextDate = today + oneDay * num;

  printf( "\n\nIn %i days the date will be :  %s\n", num, ctime( &nextDate ) );

  return 0;
} 
