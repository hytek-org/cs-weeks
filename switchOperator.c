#include <stdio.h>

int main(void)
{
char op;
float num1,num2,res;

printf("Enter first number:>>\n");
scanf("%f",&num1);
printf("Enter second number:>>\n");
scanf("%f",&num2);
printf("Operation(+,-,*,/):>>\n");

scanf("%c",&op);
switch(op)
{
case '+':
{
res=num1+num2;
break;
}
case '-':
{
res=num1-num2;
break;
}
case '*':
{
res=num1*num2;
break;
}
case '/':
{
res=num1/num2;
break;
}
default:
{
printf("Invalid choice…");
}
}
printf("Result::%f",res);

}

