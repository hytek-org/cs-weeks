#include <stdio.h>
#include <ctype.h>

int main(void)
{
char c;

printf("Enter any character:>>\n");
scanf("%c",&c);
if(isupper(c))
printf("It is UPPERCASE char..!");
else if(islower(c))
printf("It is Lowercase char..!");
else if(isdigit(c))
printf("It is DigiCase char..!");
else
printf("It is Special char..!");

}