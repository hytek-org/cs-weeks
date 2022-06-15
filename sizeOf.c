#include <stdio.h>

int main()
{
int a = 100, b;

b = sizeof(a);
printf( "\n The size of a : %d", b );

b = sizeof(double);
printf( "\n The size of double : %d", b );

b = sizeof(123L);
printf( "\n The size of 123L : %d", b );

b = sizeof(123.45);
printf( "\n The size of 123.45 : %d", b );

b = sizeof(123.45f);
printf( "\n The size of 123.45f : %d", b );


return 0;
}