#include <stdio.h>
#include <ctype.h>

int main()
{
int ch;

printf( "\n Enter a character ::: " );
ch = getchar();

if( isalnum( ch ) )
{
printf( "\n It is alpha-numeric character.\n" );
}
else
{
printf( "\n This is not an alpha-numeric character.\n" );
}

return 0;
}