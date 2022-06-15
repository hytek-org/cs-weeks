#include <stdio.h>

int main()
{

printf( "The size of an int is:\t\t" );
printf( "%d bytes.\n", sizeof(int) );

printf( "The size of a short int is:\t" );
printf( "%d bytes.\n", sizeof(short) );

printf( "The size of a long int is:\t" );;
printf( "%d bytes.\n", sizeof(long) );

printf( "The size of a char is:\t\t" );
printf( "%d bytes.\n", sizeof(char) );

printf( "The size of a float is:\t\t" );
printf( "%d bytes.\n", sizeof(float) );

printf( "The size of a double is:\t" );
printf( "%d bytes.\n", sizeof(double) );

return 0;
}