#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers : ");
scanf("%d%d%d",&a,&b,&c);
printf("Max is: %d",a>b?a>c?a:c:b>c?b:c);//Ternary operator
}