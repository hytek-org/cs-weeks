#include <stdio.h>

int main(void)
{
char ch;

printf( " Enter any Character : " );
scanf( "%c", &ch );

if( ( ch == ‘a’ ) || ( ch == ‘e’ ) || ( ch == ‘i’ ) ||
( ch == ‘o’ ) || ( ch == ‘u’ ) || ( ch == ‘A’ ) ||
( ch == ‘E’ ) || ( ch == ‘I’ ) || ( ch == ‘O’ ) ||
( ch == ‘U’ ) )
{
printf( "\n Character is a Vowel." );
}
else
{
printf( "\n Character is not a Vowel." );
}

return 0;
}