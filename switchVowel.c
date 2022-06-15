#include

int main()
{
char ch;

printf( "Enter any Character : " );
scanf( "%c", &ch );

switch( ch )
{
case 'A':
case 'e':
case 'a':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf( "\n %c is Vowel.", ch );
break;
default :
printf( "\n %c is not a Vowel.", ch );
break;
}

return 0;
}